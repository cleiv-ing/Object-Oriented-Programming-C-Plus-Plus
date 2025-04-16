#include <iostream>
#include "Pokemon.h"
using namespace std;

/*@brief Cosntruct a new Pokemon:: Pokemon object*/

Pokemon::Pokemon(){
    name = "unidentified";
    hp = 0;
    attack = 0;
    defense = 0;
    cout << "Default Constructor (Pokemon)\n";
}

/*
@brief Construct a new Pokemon::Pokemon object
@param name
@param hp
@param att
@param def
@param type*/


Pokemon::Pokemon(string name, int hp, int att, int def, vector<string> type){
    this->name = name;
    this->hp = hp;
    attack = att;
    defense = def;
    type = type;
    cout << "Overloaded Constructor (Pokemon)\n";
}

/* @ brief says whatever the pokemon normally says*/

void Pokemon::speak(){
    cout << "...\n";
}

void Pokemon::printStats(){
    //printf("Name:%s\t HP: %i\t DEF: %i\t ATT: %i\n", name.c_str(), hp, defense, attack);
    std::cout << name;
    std::cout << hp;
    std::cout << defense;
    std::cout << attack;
    std::cout << "Type: ";
    for(int i = 0; i< type.size(); i++){
        cout << type[i] << "\t";
    }
    std::cout << "" << std::endl;
}