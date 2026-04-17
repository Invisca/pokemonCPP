#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <vector>
#include "monster.hpp"

struct Player {
    int money = 0;
    std::string name;
    std::vector<Monster> team;

    //Constructor
    Player();
    Player(const std::string& name,
           const std::vector<Monster>& team);
    
    ~Player(); //Destructor
    Player(const Player& other); //Copy
    Player& operator=(const Player& other); //Assignment

    void addMonster(const Monster& monsterToAdd); //Adds pokemon to roster

    void print() const;

    void devPrint() const;


};

#endif // PLAYER_HPP