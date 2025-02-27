#include <iostream>
#include <string>
#include "RPG.h"

using namespace std;

int main(){

    RPG unknown = RPG();
    RPG Lev = RPG("Lev", 100, 100,100,"warrior");

    printf("Name: %s \tHealth: %i \tStrength: %i Defense: %i Type: %s\n"), unknown;
    printf("Name: %s \tAge: %i \tOwner: %s IsHouseTrained: %i Type: %s\n"), Lev;

    cout << RPG::isAlive,Lev;
    cout << RPG::updateHealth, Lev;
    return 0;
}