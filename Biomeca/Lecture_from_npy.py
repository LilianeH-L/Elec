import numpy as np

print("Classe de mouvement?")
movement_class = input()

print("Numéro d'acquisition?")
acquisition_number = input()

def load_data (mvt_class, acquisition_num):
    data = np.load(mvt_class + "_" + acquisition_num + '.npy')
    return data
