#include "../include/linker.hpp"

void movements(Vector2 *vec){
	if (IsKeyDown(KEY_W)) {
		vec->y -= SPEED;
	}
	
	if (IsKeyDown(KEY_S)) {
		vec->y += SPEED;
	}	
	
	if (IsKeyDown(KEY_A)) {
		vec->x -= SPEED;
	}

	if (IsKeyDown(KEY_D)) {
		vec->x += SPEED;
	}
}

Vector2 vec = {200, 200};
Vector2 size = {20, 20};
float radius = 20;

void drawPlayer(){
	DrawCircleV(vec, radius, RED);
}

Vector2 playerVectorPos(){
	return vec;
}

Vector2 playerVectorSize(){ // For rectangle vector2 size
	return size;
}

float playerRadius(){
	return radius;
}

void updatePlayer(){
	drawPlayer();
	movements(&vec);
}
