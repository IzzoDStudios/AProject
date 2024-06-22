#include "hModule/universalFunctions.h"
#include "hModule/universalVariables.h"
#include "raylib.h"

//-------------------------------------------------------Init-Funcs Zone-------------------------------------------------------//
// Function to Create a Window or "Screen".
void initScreen(){
    // Create the Window.
    InitWindow(WIDTHSCREEN, HEIGHTSCREEN, screenName);

    // Put a Config to "FULLSCREEN" to the Window.
    SetConfigFlags(FLAG_FULLSCREEN_MODE);
    
}

   

//-------------------------------------------------------Draw-Funcs Zone-------------------------------------------------------//
// Function to Draw a Rectangle.
void drawRect(){
    DrawRectangle(WIDTHSCREEN/2, HEIGHTSCREEN/2, 50, 50, RED);
}



//-------------------------------------------------------Logic-Funcs Zone------------------------------------------------------//

