#include "monster.hpp"
#include <iostream>

int Monster::next_id = 0;

// Default constructor
Monster::Monster() 
    : id(next_id++), live(false), max_hp(0), hp(0), damage(0), defense(0), name(""), type("") {}

// Standard constructor
Monster::Monster(const std::string& name, 
                 const std::string& type, 
                 int max_hp, int damage, int defense)
    : id(next_id++), live(true), name(name), type(type), max_hp(max_hp), hp(max_hp), damage(damage), defense(defense) {}

// Destructor
Monster::~Monster() {}

// Copy constructor
Monster::Monster(const Monster& other)
    : id(next_id++),
      live(other.live),
      max_hp(other.max_hp),
      hp(other.hp),
      damage(other.damage),
      defense(other.defense),
      name(other.name),
      type(other.type) {}

// Assignment operator
Monster& Monster::operator=(const Monster& other) {
    if (this != &other) {
        live = other.live;
        max_hp = other.max_hp;
        hp = other.hp;
        damage = other.damage;
        defense = other.defense;
        name = other.name;
        type = other.type;
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
    std::cout << "Defense: " << defense << "\n\n";
}

void Monster::heal(int amount) {
    if (amount < 0) return;
    hp += amount;
    std::cout << name << " healed " << amount << " health!\n";
    if (hp > max_hp) {
        hp = max_hp;
        std::cout << name << " is now full health!\n";
    }
}

// Damage script
void Monster::takeDamage(int amount) {
    if (amount <= 0 || !live) return;
    hp -= amount;
    std::cout << name << " took " << amount << " damage!\n";
    if (hp <= 0) {
        live = false;
        hp = 0;
        std::cout << name << " fucken died!\n";
    }
}

// Revive/reset mechanic
void Monster::reset() {
    hp = max_hp;
    live = true;
    std::cout << name << " has been revived\n";
}

void Monster::devPrint() const {
    std::cout << "----------------------\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Type: " << type << "\n";
    std::cout << "HP: " << hp << "\n";
    std::cout << "MAX_HP: " << max_hp << "\n";
    std::cout << "Damage: " << damage << "\n";
    std::cout << "Defense: " << defense << "\n\n";
}