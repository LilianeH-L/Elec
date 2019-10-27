
import numpy as np
import matplotlib.pyplot as plt


# use ggplot style for more sophisticated visuals
plt.style.use('ggplot')

def live_plotter_angle(ax,line1,angle,T1,style,a,identifier='',pause_time=1):
    #position en x
    x=1
    #position en y
    y=1
    #Évaluer la position du bout de la ligne avec la trigonométrie
    phi = np.radians(angle)
    xx = [x + .5, x, x + .5*np.cos(phi)]
    yy = [y, y, y + .5*np.sin(phi)]
    
   
    if line1==[]: 
        # this is the call to matplotlib that allows dynamic plotting
        plt.ion()
        # create a variable for the line so we can later update it
        if a==1:
            line1, = ax.plot(xx, yy, lw=12, color='tab:blue', solid_joinstyle=style)
            print(line1)
        elif a==2:
            line1, = ax.plot(xx, yy, lw=1, color='black')
        elif a==3:
            line1, = ax.plot(xx[1], yy[1], 'o', color='tab:red', markersize=3)
        #update plot label/title
        plt.ylabel('Y Label')
        plt.title('Title: {}'.format(identifier))
        plt.show()
      

    
    
    
    # update x, y et le text
    line1.set_xdata(xx)
    line1.set_ydata(yy)
    T1.set_text( f'{angle} degrees')
    # limite la grosseur du graph
    plt.xlim(0,2)
    plt.ylim(0,2)
    ax.xaxis.set_visible(False)
    ax.yaxis.set_visible(False)
    # Pause ( peut être inutile)
    plt.pause(pause_time)
    
    # return line so we can update it again in the next iteration
    return line1
