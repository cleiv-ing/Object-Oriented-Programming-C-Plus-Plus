#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;


    Pet::Pet(){
        this -> name = "";
        this -> age = -1;
        this -> owner = "";
        this -> IsHouseTrained = false;
    }

    Pet(string name; int age; string owner; bool IsHouseTrained;);

    void Pet::getName(string name){
        name = "Jeffrey";
    }

    void Pet::getAge(int age){
        age = 14;
    }

    void Pet::getOwner(string owner){
        owner = "Bob";
    }

    void Pet::getIsHouseTrinaed(bool IsHouseTrained){
        IsHouseTrained = true;
    }

    void Pet::updateName(string name){
        name = "Moomers";
    }

    void Pet::updateAge(int age){
        age = age+1;
    }

    void Pet::updateOwner(string owner){
        owner = "Meemers";
    }

    void Pet::setHouseTrained(bool setHouseTrained){
        setHouseTrained = true;
    }
