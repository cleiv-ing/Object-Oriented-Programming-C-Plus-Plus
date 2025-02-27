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
    
    RPG mySkills;
    mySkills.setSkills();
     
    this->name = "NPC";
    this->health = 100;
    this->strength = 10;
    defense = 10;
    type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";
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

const string RPG::getName(string){
    this->name = name;
    return name;
    }

const int RPG::getStrength(int){
    this->strength = strength;
    return strength;
}

const int RPG::getHealth(int){
    this->health = health;
    return health;
}

void RPG::updateHealth(int){
        int health = health;
}

const bool isAlive(bool){
    int health = 100;
    if (health >0)
    {
    bool Alive = true;
    }

    else{
    bool Alive = false;
    }

    return health;
}

void RPG::printAction(string skill, RPG opponent){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName("Bobeth").c_str());
}
