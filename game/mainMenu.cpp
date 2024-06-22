#include "src/hModule/mainMenu.h"
#include "src/hModule/universalVariables.h"
#include "src/hModule/universalFunctions.h"
#include "raylib.h"

void initMenu(){

//-------------------------------------------------------Camera Zone-------------------------------------------------------//
    // Init the Camera.
    Camera2D camera = { 0 }; 

    /* OFFSET: The Point From Which you View the Scene, if the Offset is (100,100), you are Viewing the Scene Shifted
    100 Units to the Right and 100 Units Down From the Center.*/
    camera.offset = Vector2{0, 0};

    // TARGET: The Center Point of the Camera. 
    camera.target = Vector2{0, 0}; 

    // ROTATION: The Rotation of the Camera.
    camera.rotation = 0.0f; 

    // ZOOM The Zoom to the Camera.
    camera.zoom = 1.0f; 



//-------------------------------------------------------First Zone-------------------------------------------------------//
    // Function to Init the Screen.
    initScreen();

//-------------------------------------------------------Loop Zone-------------------------------------------------------//
    // Loop to the Game.
    while(!WindowShouldClose()){

//-------------------------------------------------------Draw-Zone-------------------------------------------------------//
        BeginDrawing(); // Init the Draw Mode.

        ClearBackground(WHITE); // Clear the Window.

        //--------------------------------------2D Draw Mode Zone------------------------------------------------------------//
        BeginMode2D(camera); // Init the 2D Draw Mode.

        
        // Function to Draw a Rectangle.
        drawRect();


        EndMode2D(); // End to the 2D Draw Mode.
        //--------------------------------------End-2D Draw Mode Zone--------------------------------------------------------//

        EndDrawing(); // End to the Draw Mode.
    }

    CloseWindow(); // Close the Game or Level.

}
