#include "player.hpp"
#include <iostream>

// Default constructor
Player::Player()
    : money(0), name(""), team() {}

// Standard constructor
Player::Player(const std::string& name,
               const std::vector<Monster>& team)
    : money(0), name(name), team(team) {}

// Destructor
Player::~Player() {}

// Copy constructor
Player::Player(const Player& other)
    : money(other.money),
      name(other.name),
      team(other.team) {}

// Assignment operator
Player& Player::operator=(const Player& other) {
    if (this != &other) {
        money = other.money;
        name = other.name;
        team = other.team;
    }
    return *this;
}

void Player::addMonster(const Monster& monsterToAdd) {
    for (const Monster& monster : team) {
        if (monster.id == monsterToAdd.id) {
            return;
        }
        else if (team.size() >= 6) {
            std::cout << "Party is full!";
            return;
        }
        
    }
    team.push_back(monsterToAdd);
    std::cout << name << " has been successfully added to the party!\n";
    monsterToAdd.print();
}

void Player::print() const {
    std::cout << "----------------------\n";
    std::cout << "Name:\t" << name << "\n";
    std::cout << "Money:\t" << money << "\n";
    std::cout << "Team:\t";

    bool first = true;
    for (const Monster& monster : team) {
        if (!first) {
            std::cout << ", ";
        }
        std::cout << monster.name;
        first = false;
    }
    std::cout << "\n\n";
}

void Player::devPrint() const {
    std::cout << "----------------------\n";
    std::cout << "Name:\t" << name << "\n";
    std::cout << "Money:\t" << money << "\n";
    std::cout << "Team:\t";

    bool first = true;
    for (const Monster& monster : team) {
        if (!first) {
            std::cout << ", ";
        }
        std::cout << monster.name << "-ID:" << monster.id;
        first = false;
    }
    std::cout << "\n\n";
}