import serial
import numpy as np
import queue
import threading
import os
import math
												#Commencer par le main pour mieux comprendre
kNElectrodes = 1 # on garde --> nombre d'encodeurs
kSizePacket = 350 # inutile
kNSamplesPerPacket = int(kSizePacket / 2) # inutile
kSamplePerSecond = 10 # inutile --> ils s'en servent seulement pour la taille du tableau


#info sur ce qu'on veut mesurer, combien de temps, utile pour stocker
print("Temps d'acquisition?")
kAcquisitionTime = input() # à changer par une commande de début/fin dans le terminal

print("Classe de mouvement?")
movement_class = input() # on garde

print("Numéro d'acquisition?")
acquisition_number = input() # on garde

#jusqu'au numéro de packets à prendre (n'est pas défini dans le code, à corriger) va enregistrer 
#dans un array nommé emg_data et le sauvegarder en format binary, va ensuite sortir
#
def process_serial_buffer(q):
    electrode = q.get()
    processed_packets = 0
    #np.zeros crée un array de 0, de taille kNElectrodes x kNumPacketsToAcquire * kNSamplesPerPacket / kNElectrodes
    emg_data = np.zeros((kNElectrodes, int(int(kAcquisitionTime)*kSamplePerSecond / kNElectrodes)), dtype=int)
    while True:
        packet = np.zeros(kSamplePerSecond, dtype=int)
        for i in range(0, kSizePacket, 2):
            low = q.get()
            high = q.get()
            sample = low + (high << 8) #Sample=donnee lue
            packet[int(i / 2)] = sample #Packet=ensemble de samples pour une electrode (dans notre cas ce sera plutot un encodeur)

			#Information est lue par increments de 8 bytes mais la donnee est de 16 bytes, 
			#donc il faut shift la deuxieme lecture pour additionner correctement et obtenir une sample finale de 16 bytes dans le packet, 
			#reste a determiner combien de bytes sera la donnee du Teensy dans notre cas


        start_index = int(processed_packets / kNElectrodes) * kNSamplesPerPacket
        emg_data[electrode, start_index: start_index + kNSamplesPerPacket] = packet #Les donnees d un packet (ensemble de samples pour une electrode donnee) sont stockees dans
        electrode = electrode + 1													#emg_data qui regroupe l ensemble des donnees et l electrode a laquelle elles correspondent
        electrode = electrode % kNElectrodes  
        processed_packets = processed_packets + 1
        if processed_packets >= kNumPacketsToAcquire: #Si on a toutes les donnees desirees on save, sinon on recommence la boucle pour une nouvelle electrode
            np.save(movement_class + "_" + str(kAcquisitionTime) + "s_" + str(kSamplePerSecond) + "Hz_" +
                    acquisition_number, emg_data) #enregistre les données du tableau emg_data dans un fichier .npy
                                                #du style abduction_3s_200Hz_1.npy 
            os._exit(0)


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

	#Le code a deux unites fonctionnelles qui travaillent en parallele : la boucle while juste en dessous recupere les donnes et les mets en "file d attente" dans la variable q 
	#La variable q est donc un buffer qui fait le pont entre les deux unites. La fonction process_serial_buffer est appelee avec consumer et prend la variable q en argument 
	#et sauve les valeurs lues sous forme de packet associe a une electrode le tout organise dans un tableau (np.save). Le buffer est donc ecrit et lu simultanement.
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



