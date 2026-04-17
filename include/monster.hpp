#ifndef MONSTER_HPP
#define MONSTER_HPP
#include <string>

struct Monster {
    static int next_id;
    int id;

    bool live;
    int max_hp;
    int hp;
    int damage;
    int defense;
    std::string name;
    std::string type;

    // Constructor
    Monster();
    Monster(const std::string& name, 
            const std::string& type, 
            int max_hp, 
            int damage, 
            int defense);  
    
    // Rule of 3
    ~Monster(); //Destructor 
    Monster(const Monster& other); //Copy
    Monster& operator=(const Monster& other); //Assignment
    

    void print() const; //Prints name and hp

    void heal(int amount); //Heals hp

    void takeDamage(int amount); //Damage hp pass

    void reset(); //Resets pokemon

    void devPrint() const; //Prints all related values for testing
};

#endif // MONSTER_HPP