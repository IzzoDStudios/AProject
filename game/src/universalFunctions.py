from src import universalVariables as UV
import raylib as ray

#-------------------------------------------------------Init-Funcs Zone-------------------------------------------------------#
# Function to Create a Window or "Screen".
def initScreen():
    # Create the Window.
    ray.InitWindow(UV.WIDTHSCREEN, UV.HEIGHTSCREEN, UV.screenName)

    # Put a Config to "FULLSCREEN" to the Window.
    ray.SetConfigFlags(ray.FLAG_FULLSCREEN_MODE)

    

#-------------------------------------------------------Draw-Funcs Zone-------------------------------------------------------#
# Function to Draw a Rectangle.
def drawrec():
    ray.DrawRectangle(UV.WIDTHSCREEN//2, UV.HEIGHTSCREEN//2, 50, 50, ray.RED)



#-------------------------------------------------------Logic-Funcs Zone-------------------------------------------------------#
