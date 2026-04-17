all: game

game: test.o monster.o player.o
	g++ test.o monster.o player.o -o game

test.o: test.cpp monster.hpp player.hpp
	g++ -c test.cpp

monster.o: monster.cpp monster.hpp
	g++ -c monster.cpp

player.o: player.cpp player.hpp
	g++ -c player.cpp

clean:
	rm -f *.o game game.exe
