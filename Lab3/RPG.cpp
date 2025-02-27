#include <iostream>
#include <string>
#include "RPG.h"
using namespace std;

/*
    @brief sets the skills based on the RPG's role

*/

RPG::RPG()
{
 
}

RPG::RPG(string name, int health, int strength, int defense, string type){
    
    RPG mySkills;
    mySkills.setSkills;
     
    name = "NPC";
    this->health = 100;
    strength = 10;
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

}

void RPG::printAction(string skill, RPG opponent){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName("Bobeth").c_str());
}

void updateHealth(int new_health){
    int health = new_health;
}

const bool isAlive(bool){
    this->health = 100;
    if (health >0)
    {
        string Alive;
        Alive = true;
    }

    else
    string Alive;
    Alive = false;
}