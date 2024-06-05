import pyray as ray

#-------------------------------------------------------Windows Variables-------------------------------------------------------
SCREENSIZE = (600, 600) # The Resolution of the Screen.
WIDTHSCREEN, HEIGHTSCREEN = SCREENSIZE # We divide the Tuple into Two Variables to Have Better Management in the Code.
screenName = b"P2PROJECT"



#-------------------------------------------------------Camera Variables-------------------------------------------------------
camera = ray.Camera2D() # Init the Camera.
camera.offset = ray.Vector2(0, 0) # The Point From Which you View the Scene, if the Offset is (100,100), you are Viewing the Scene Shifted 100 Units to the Right and 100 Units Down From the Center.
camera.target = ray.Vector2(0, 0) # The Center Point of the Camera.
camera.rotation = 0.0 # The Rotation of the Camera.
camera.zoom = 1.0 # The Zoom to the Camera.
