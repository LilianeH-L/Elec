import serial
import numpy as np
import queue
import threading
import os
import math
import time
												#Commencer par le main pour mieux comprendre
kNEncodeurs = 1 

#info sur ce qu'on veut mesurer, combien de temps, utile pour stocker
print("Classe de mouvement?")
movement_class = input() 

print("Numéro d'acquisition?")
acquisition_number = input() 


def process_serial_buffer(q):
    angles_data = np.zeros((1, kNEncodeurs+1), dtype=int)
    startTimestamp = time.time()*1000 # temps au début de la mesure
    while True: 
        # on lit le premier caractère (16 bits)
        sample = q.get()
        #print(chr(sample))
        if sample == 35: # si c'est un #, ça indique le début d'une position
            position = np.zeros((1,kNEncodeurs+1), dtype=int)
            for i in range(0,kNEncodeurs-1): # on enregistre chaque angle dans une colonne de position
                low = q.get()
                high = q.get()
                sampleValeur = low + (high << 8) 
#problème ici: rentre pas dans la boucle
                print(sampleValeur)
                position [0][i] = sampleValeur
            timestamp = time.time()*1000 - startTimestamp # timestamp de la position enregistrée
            position [0][kNEncodeurs] = timestamp
            print(position)
            if angles_data.shape[0] == 1: # si c'est la première position, angles_data=position
                angles_data = position
            else:
                angles_data = np.append(angles_data, position, axis=0) # sinon on ajoute position à la fin d'angles_data
        if sample == 37: # si on lit %, ça indique que la mesure est terminée
            print("wesh")
            np.save(movement_class + "_" + acquisition_number, angles_data) # on enregistre les données
                                                                            # au format "abduction_1.npy" 
            os._exit(0)

# Rien à changer dans main
def main():
    port_open = False	#Ouverture du port du Teensy pour debuter la lecture
    while not port_open:
        try:
            ser = serial.Serial("COM5", timeout=None, baudrate=9600, xonxoff=False, rtscts=False, dsrdtr=False)
            ser.flushInput()
            ser.flushOutput()
            port_open = True
        except:
            pass

	#Le code a deux unites fonctionnelles qui travaillent en parallele : la boucle while juste en dessous recupere les donnes et les met en "file d attente" dans la variable q 
	#La variable q est donc un buffer qui fait le pont entre les deux unites. La fonction process_serial_buffer est appelee avec consumer et prend la variable q en argument 
	#et sauve les valeurs lues dans un tableau (np.save). Le buffer est donc ecrit et lu simultanement.
    q = queue.Queue() 
    consumer = threading.Thread(target=process_serial_buffer, args=(q,))
    consumer.start()
    try:
        while True:
            bytesToRead = ser.inWaiting()
            if bytesToRead != 0:
                data = ser.read(bytesToRead)
                for sample in data:
                    q.put(sample)
    except KeyboardInterrupt:
        print('interrupted!')
    os._exit(0)


if __name__ == "__main__":
    main()



