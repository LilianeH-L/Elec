import Lecture_from_npy as lect
import numpy as np
import matplotlib.pyplot as plt



def vitesse(mouv, mesure):
#  Retourne un vecteur de la vitesse et un tableau du temps correspondant (par exemple, à temps[0]
#  on a la vitesse de vitesse[0]) du type de mouvement mouv à la mesure enregistré dans un npy.
#  Le type de mouvement est selon le tableau movements_names = ["Abduction", "Adduction", "Flexion"]
#  Par exemple, pour avoir le vecteur de vitesse de Abduction_1.npy: vitesse(0,0). La fonction va aussi
#  plot la vitesse en fonction du temps. Si ça ressemble juste à une ligne, zoomer.
    lect.load_data()
    lecture=lect.movements[mouv].measures[mesure].positions
    vitesse=np.zeros(lecture[-1].timestamp)
    temps=[i for i in range(lecture[-1].timestamp)]
    anglei=0
    tempsi=0
    for pos in lecture:
        anglef=pos.angle1
        tempsf=pos.timestamp
        for i in range(tempsi, tempsf):
            vitesse[i] = (anglef-anglei)/(tempsf-tempsi)
        tempsi=tempsf
        anglei=anglef
    plt.plot(temps, vitesse)
    plt.show()
    return vitesse, temps