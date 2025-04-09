#include <iostream>
#include <string>
#include "RPG.h"
using namespace std;

/*
    @brief sets the skills based on the RPG's role

*/

RPG::RPG()
{
 name = "";
 health = -1;
 strength = -1;
 defense = -1;
 type = "";
 skills[0] = "";
 skills[1] = "";
}

RPG::RPG(string name, int health, int strength, int defense, string type){
    
    setSkills();
     
    name = "Lev";
    this->health = 100;
    this->strength = 10;
    defense = 10;
    type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";
 }


const string RPG::getName(){
    return name;
    }

const int RPG::getStrength(){
    return strength;
}

const int RPG::getHealth(){
    return health;
}

const int RPG::getDefense(){
    return defense;
}

string RPG::getType(){
    return type;
}

// void RPG::updateHealth(){
//         int new_health = 0;
//         health = health - new_health;
// }

bool RPG::isAlive(){
    int health = health;
    if (health >0)
    {
    bool Alive = true;
    Alive = Alive;
    }

    else{
    bool Alive = false;
    Alive = Alive;
    }
    return health;
}


void RPG::setSkills(){
    if (type == "mage"){
        skills[0] = "fire";
        skills[1] = "thunder";
    } else if (type == "thief"){
        skills [0] = "pilfer";
        skills [1] = "jab";
    } else if (type == "archer"){
        skills [0] = "parry";
        skills [1] = "crossbow_attack";
    } else {
        skills [0] = "slash";
        skills [1] = "parry";
    }

}


// void RPG::attack(RPG& opponent){

//     new_health = health - abs(strength-defense); //changed
//     cout << new_health;
//     new_health = RPG& opponent.updateHealth(); //not too sure if this is right, will check

// }

// void RPG::useSkill(RPG& opponent){
//     for(int i = 0; i<=2; i++)
//     {
//         cout << "Which skill would you like to use? \n";
//         cin >> i;
//         int skill[SKILL_SIZE];
       
//     }
    
// }
// void RPG::printAction(){
//     printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName("Bobeth").c_str());
// }
