#include "monster.hpp"
#include "player.hpp"
#include <iostream>

int main() {
    Monster pikachu("Pikachu", "Electric", 100, 20, 10);
    Monster charmander("Charmander", "Fire", 90, 25, 8);
    Monster squirtle("Squirtle", "Water", 110, 18, 12);

    std::cout << "Test print monsters:\n";
    pikachu.print();
    charmander.print();
    squirtle.print();

    std::cout << "Initial monsters:\n";
    pikachu.devPrint();
    charmander.devPrint();
    squirtle.devPrint();

    std::cout << "\nTesting damage/heal:\n";
    pikachu.takeDamage(30);
    pikachu.devPrint();

    pikachu.heal(15);
    pikachu.devPrint();

    pikachu.takeDamage(200);
    pikachu.devPrint();

    pikachu.reset();
    pikachu.devPrint();

    std::cout << "\nTesting copy constructor:\n";
    Monster copy = charmander;
    charmander.devPrint();
    copy.devPrint();

    std::cout << "\nTesting assignment operator:\n";
    copy = squirtle;
    squirtle.devPrint();
    copy.devPrint();

    std::cout << "\nTesting Player:\n";
    Player ash("Ash", {});
    ash.addMonster(pikachu);
    ash.addMonster(charmander);
    ash.addMonster(squirtle);
    ash.addMonster(pikachu); // duplicate by id, should not add again
    ash.devPrint();

    std::cout << "\nPress enter to exit...";
    std::cin.get();
    return 0;
}
