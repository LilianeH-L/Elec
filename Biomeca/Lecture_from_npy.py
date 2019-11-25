import numpy as np
from os import path

movements = [] 
movements_names = ["Abduction", "Adduction", "Flexion"]

def load_data (): # chargement de toutes les données enregistrées
    global movements_names
    for mvt in movements_names:
        load_movement(mvt)

def load_movement (mvt_class): # chargement d'un mouvement
    global movements
    movements.append(Movement(mvt_class)) # on ajoute le nouveau mouvement à la liste des mouvements



class Movement :
    def __init__(self, id):
        self.id = id # nom du mouvement
        self.measures = self.get_measures() # liste des mesures relatives au mouvement

    def get_measures(self):
        measures = []
        acquisition_num = 1
        existingMeasure = path.exists(self.id + "_" + acquisition_num + '.npy') # on regarde si il existe au moins la mesure 1
        if existingMeasure == False: # s'il n'y a pas de mesure 1, afficher une erreur 
            print("No {} movement have been recorded".format(self.id))
        else:
            while existingMeasure == True: # tant qu'un fichier de mesure est détecté
                file_name = self.id + "_" + acquisition_num + '.npy'
                measures.append(Measures(self.id, acquisition_num)) # on ajoute la mesure lue à la liste
                acquisition_num += 1
                existingMeasure = path.exists(file_name) # on regarde s'il existe un fichier content la mesure suivante
        return measures

class Measures :
    def __init__(self, mvt, id):
        self.id = id # numéro de la mesure
        self.positions = self.get_positions(mvt) # liste des positions relatives à la mesure

    def get_positions(self, mvt):
        positions = []
        file_name = mvt + "_" + self.id + '.npy'
        data = np.load(file_name) # chargement du fichier correspondant à la mesure en question
        for row in data:
            positions.append(Positions(row[0],row[1],row[2],row[3])) # definition de la liste de positions
        return positions

class Positions :
    def __init__(self, angle1, angle2, angle3, timestamp):
        self.angle1 = angle1
        self.angle2 = angle2
        self.angle3 = angle3
        self.timestamp = timestamp