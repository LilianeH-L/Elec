from liveplot_joint import live_plotter_angle
import numpy as np
import matplotlib.pyplot as plt



line1 = []
line2 = []
line3 = []
#construire le subplots appelé ax
fig, ax = plt.subplots(figsize=(8,6))
#définir l'emplacement du texte de l'angle
T1=ax.text(0.2,1,'')
T2=ax.text(0.2, 0.8, '')
while True:
    style='round'
    #input des valeurs de 0 à 180 afin de tester
    angleEpaule=30
    #grosses lignes bleues
    #for angleCoude in range(0,180):
    angleCoude=90
    line1 = live_plotter_angle(ax,line1,angleCoude,angleEpaule,T1, T2,style,a=1,identifier='position du bras',pause_time=0.01)
    #traits fins noirs
    #line2 = live_plotter_angle(ax,line2,angle,T1,style,a=2,identifier='',pause_time=0.05)
    #points rouges
    #line3 = live_plotter_angle(ax,line3,angle,T1,style,a=3,identifier='',pause_time=0.05)
