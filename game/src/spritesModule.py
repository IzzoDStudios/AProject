
""" Basic Structure of Class Variables for Characters or Objects:
  self.posx =
        self.posy =
        self.widthSprite =
        self.heightSprite =
        self.widthCollider =
        self.heightCollider =  
        self.image = ray.load_texture("img/menú.png")
        self.collider = ray.Rectangle() """



import pyray as ray

class player():
    def __init__(self):
        self.posx = 0
        self.posy = 0
        self.widthSprite = 0
        self.heightSprite = 0
        self.widthCollider = 0
        self.heightCollider = 0
        self.image = ray.load_texture("img/menú.png")
        self.collider = ray.Rectangle()
        