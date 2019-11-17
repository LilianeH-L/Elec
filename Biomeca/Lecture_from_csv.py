import csv


def charger_mesures (file_name):
    mesures = []
    with open(file_name, newline = '', encoding = "utf-8") as file:
        reader = csv.DictReader(file, delimiter = ";")
        for row in reader:
            mesures.append(Mesures(row["ID"], row["Mouvement"]))
    return mesures

def charger_positions (file_name):
    positions = []
    with open(file_name, newline = "", encoding = "utf-8") as file:
        reader = csv.DictReader(file, delimiter = ";")
        for row in reader:
            positions.append(Positions(row["ID_mesure"], row["Angle 1"], row["Angle 2"], row["Angle 3"]
                                       , row["Temps"]))
    return positions

def charger_bdd ():
    global mesures, positions
    positions = charger_positions("Positions.csv")
    mesures = charger_mesures("Mesures.csv")


class Mesures :
    def __init__(self, id, mouvement):
        self.id = id
        self.mouvement = mouvement
        self.positions = self.get_positions()

    def get_positions(self):
        global positions
        my_pos = [pos for pos in positions if pos.id_mesure == self.id]
        return my_pos

    def __repr__(self):
        return "Mesure {} pour le mouvement {}: {}".format(self.id, self.mouvement, self.positions)

class Positions :
    def __init__(self, id_mesure, angle1, angle2, angle3, temps):
        self.id_mesure = id_mesure
        self.angle1 = angle1
        self.angle2 = angle2
        self.angle3 = angle3
        self.temps = temps

    def __repr__(self):
        return "Position au temps {} dans la mesure {} : {}, {}, {}".format(self.temps, self.id_mesure,
                                                                            self.angle1, self.angle2,
                                                                            self.angle3)
charger_bdd()
