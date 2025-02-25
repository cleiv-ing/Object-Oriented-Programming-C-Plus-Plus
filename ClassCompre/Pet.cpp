#include <iostream>
#include <string>
#include "Pet.h"

using namespace std;

    Pet::Pet()
    {
        name = "";
        age = -1;
        owner = "";
        IsHouseTrained = false;
    }

    Pet::Pet(string name, int a, string owner, bool IsHouseTrained)
    {
        this->name = name;
        age = a;
        this->owner = owner;
        IsHouseTrained = getIsHouseTrained;
    }

    void Pet::getName(string name){
        this->name = name;
    }

    void Pet::getAge(int age){
        age = 14;
    }

    void Pet::getOwner(string owner){
        owner = "Bob";
    }

    void Pet::getIsHouseTrained(bool IsHouseTrained){
        IsHouseTrained = true;
    }

    void Pet::updateName(string name){
        this->name = "Moomers";
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
