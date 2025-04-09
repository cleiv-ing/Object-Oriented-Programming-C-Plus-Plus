#include <iostream>
#include "Pokemon.h"

/*@brief Cosntruct a new Pokemon:: Pokemon object*/

Pokemon::Pokemon(){
    name = "unidentified";
    hp = 0;
    attack = 0;
    defense = 0;
    cout << "Default Constructor (Pokemon)\n";
}

/*@brief Construct a new Pokemon::Pokemon object*/

Pokemon::Pokemon(){
    this->name = name;
    this->hp = hp;
    attack = attack;
    defense = defense;
    type = type;
    cout << "Overloaded Constructor (Pokemon)\n";
}

/* @ brief says whatever the pokemon normally says*/

void Pokemon::speak(){
    cout << "...\n";
}

void Pokemon::printStats(){
    printf("Name:%s\t HP: %i\t DEF: %i\t ATT: %i\n", name.c_str(), hp, defense, attack);
    cout << "Type: ";
    for(int i = 0; i< type.size(); i++){
        cout << type[i] << "\t";
    }
    cout << endl;
}