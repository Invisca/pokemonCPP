#include "monster.hpp"
#include <iostream>

int main() {
    Monster pikachu("pikachu", "Electric", 100, 20, 10);
    
    pikachu.print(); //print pikachu
    
    //copy constructor
    Monster copy = pikachu;
    copy.hp = 12;

    copy.print();

    return 0;
}
