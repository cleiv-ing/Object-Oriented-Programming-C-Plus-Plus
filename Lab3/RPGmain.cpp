#include <iostream>
#include <string>
#include "RPG.h"

using namespace std;

int main(){

    RPG unknown = RPG();
    RPG Lev = RPG("Lev", 100, 100,100,"warrior");

    //printf("Name: %s \tHealth: %i \tStrength: %i Defense: %i Type: %s\n"), unknown;
    //printf("Name: %s \tAge: %i \tOwner: %s IsHouseTrained: %i Type: %s\n"), Lev;

    cout << "Warrior's name: " << Lev.getName() << "\n";
    cout << "Health status: " << Lev.getHealth() << "\n";
    cout << "Strength Level: " << Lev.getStrength() << "\n";
    cout << "Defense Level: " << Lev.getDefense() << "\n";
    cout << "Warrior Type: " << Lev.getType() << "\n";

    cout << "\n";

    cout << "Warrior's name: " << unknown.getName() << "\n";
    cout << "Health status: " << unknown.getHealth() << "\n";
    cout << "Strength Level: " << unknown.getStrength() << "\n";
    cout << "Defense Level: " << unknown.getDefense() << "\n";
    cout << "Warrior Type: " << unknown.getType() << "\n";
    
    //cout << RPG::isAlive,Lev;
    //cout << RPG::updateHealth, Lev;
    return 0;
}