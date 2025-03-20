#include <iostream>
#include <string>
#include "RPG.h"

using namespace std;

int main(){

    RPG unknown = RPG();
    RPG Lev = RPG("NPC", 100, 10, 10,"warrior");

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
    
    cout << "Is Player " << Lev.getName() << " alive? 1 = alive. 0 = dead. " << Lev.isAlive() << "\n";
    cout << Lev.updateHealth(10);
    return 0;
}