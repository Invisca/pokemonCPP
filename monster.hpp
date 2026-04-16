#ifndef MONSTER_HPP
#define MONSTER_HPP
#include <string>

struct Monster {
    int hp;
    int damage;
    int defense;
    std::string name;
    std::string type;

    // Constructor
    Monster();
    Monster(const std::string& name, 
            const std::string& type, 
            int hp, 
            int damage, 
            int defense);  
    
    // Rule of 3
    ~Monster(); //Deconstructor
    Monster(const Monster& other); //Copy
    Monster& operator=(const Monster& other); //Assignment
    

    void print() const; //print
};

#endif // MONSTER_HPP