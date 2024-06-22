import pyray as ray

from src import universalVariables as UV
from src import universalFunctions as UFS
import pyray as ray

def initLevel():
#-------------------------------------------------------First Zone-------------------------------------------------------#
    # Function to Init the Screen.
    UFS.initScreen()

#-------------------------------------------------------Loop Zone-------------------------------------------------------#
    # Loop to the Game.
    while not ray.window_should_close():

#-------------------------------------------------------Draw-Zone-------------------------------------------------------#
        ray.begin_drawing() # Init the Draw Mode.

        ray.clear_background(ray.WHITE) # Clear the Window.

        #--------------------------------------2D Draw Mode Zone------------------------------------------------------------#
        ray.begin_mode_2d(UV.camera) # Init the 2D Draw Mode.

        
        # Function to Draw a Rectangle.
        UFS.drawrec()


        ray.end_mode_2d() # End to the 2D Draw Mode.
        #--------------------------------------End-2D Draw Mode Zone--------------------------------------------------------#

        ray.end_drawing() # End to the Draw Mode.

    ray.close_window() # Close the Game or Level.
