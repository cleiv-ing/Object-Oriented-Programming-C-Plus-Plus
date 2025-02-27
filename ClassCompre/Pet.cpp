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

    Pet::Pet(string name, int a, string owner, bool IsHT)
    {
        this->name = name;
        age = a;
        this->owner = owner;
        IsHouseTrained = IsHT;
    }

    string Pet::getName(){
        return name;
    }

    int Pet::getAge(){
        return age+1;
    }

    string Pet::getOwner(){
        return owner;
    }

    bool Pet::getIsHouseTrained(){
        return getIsHouseTrained;
    }

    string Pet::updateName(){
        string newName = "Jeef";
        return newName;
    }

    int Pet::updateAge(){
        int newAge = age+1;
        return newAge;
    }

    string Pet::updateOwner(){
        string newOwner = "Beff"
        return owner;
    }

    bool Pet::setHouseTrained(){
        return setHouseTrained;
    }
