#include "monster.hpp"
#include <iostream>

// Default constructor
Monster::Monster() 
    : hp(0), damage(0), defense(0), name(""), type("") {}

// Standard constructor
Monster::Monster(const std::string& name, 
                 const std::string& type, 
                 int hp, int damage, int defense)
    : name(name), type(type), hp(hp), damage(damage), defense(defense) {}

// Destructor
Monster::~Monster() {}

// Copy constructor
Monster::Monster(const Monster& other)
    : name(other.name),
      type(other.type),
      hp(other.hp),
      damage(other.damage),
      defense(other.defense) {}

// Assignment operator
Monster& Monster::operator=(const Monster& other) {
    if (this != &other) {
        name = other.name;
        type = other.type;
        hp = other.hp;
        damage = other.damage;
        defense = other.defense;
    }
    return *this;
}
// Print function
void Monster::print() const {
    std::cout << "----------------------\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Type: " << type << "\n";
    std::cout << "HP: " << hp << "\n";
    std::cout << "Damage: " << damage << "\n";
    std::cout << "Defense: " << defense << "\n";
}