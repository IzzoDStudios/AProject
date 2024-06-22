#include "hModule/spritesModule.h"
#include "raylib.h"

/* Basic Structure of Class Variables for Characters or Objects:
  public:
        double posx;
        double posy;
        double widthSprite;
        double heightSprite;
        double widthCollider;
        double heightCollider;
        Texture2D image; 
        Rectangle collider;

    player::player(){
        posx = 0;
        posy = 0;
        widthSprite = 0;
        heightSprite = 0;
        widthCollider = 0;
        heightCollider = 0;
        image = LoadTexture("img/player.png");
        collider = Rectangle();
    } */

class player{
    public:
        double posx;
        double posy;
        double widthSprite;
        double heightSprite;
        double widthCollider;
        double heightCollider;
        Texture2D image; 
        Rectangle collider;

    player(){
        posx = 0;
        posy = 0;
        widthSprite = 0;
        heightSprite = 0;
        widthCollider = 0;
        heightCollider = 0;
        image = LoadTexture("img/player.png");
        collider = Rectangle();
    }
};