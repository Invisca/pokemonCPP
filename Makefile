all: game

game: test.o monster.o
    g++ test.o monster.o -o game

test.o: test.cpp monster.hpp
    g++ -c test.cpp

monster.o: monster.cpp monster.hpp
    g++ -c monster.cpp

clean: 
    del *.o game.exe