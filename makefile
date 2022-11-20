default:
	g++ -o bin/game.exe src/*.cpp -s -static -Os -Wall -I include/ -L lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
	bin/game.exe