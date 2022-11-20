#include "../include/linker.hpp"

using namespace std;

const int height = GetScreenHeight();
const int width = GetScreenWidth();

int main()
{
	
	Vector2 recPV = {400, 500};
	Vector2 recSV = {50, 30};

	InitWindow(height, width, "a simple game");
	SetTargetFPS(GetMonitorRefreshRate(GetCurrentMonitor()));
	ToggleFullscreen();

	while (!WindowShouldClose()) {
		BeginDrawing();
		if (!CheckCollisionCircleRec(playerVectorPos(), playerRadius(), {recPV.x, recPV.y, recSV.x, recSV.y}))
			DrawRectangleV(recPV, recSV, YELLOW);
		ClearBackground(RAYWHITE);
		updatePlayer();
		EndDrawing();
	}

	CloseWindow();

	return 0;
}