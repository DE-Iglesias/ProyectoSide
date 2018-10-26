#include "raylib.h"
#include "Game.h"
using namespace Game;
namespace End
{
	void EDraw()
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawTextureRec(Sky, Cielo, {0,0}, WHITE);
		DrawText("YOU LOSE", screenWidth/4, screenHeight/3, 50, WHITE);
		DrawText("ENTER TO EXIT", screenWidth / 4, screenHeight / 3+60, 50, WHITE);
		DrawText("SPACE TO RESTART", screenWidth / 4, screenHeight / 3+120, 50, WHITE);
		EndDrawing();
	}
	void EUpdate()
	{
		if (IsKeyDown(KEY_ENTER))
		{
			gameover = true;
		}
		if (IsKeyDown(KEY_SPACE))
		{
			Game::Restart();
			currentScreen--;
		}
	}
};