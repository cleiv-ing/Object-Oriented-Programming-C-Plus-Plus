#include <iostream>
#include <string>
#include "Pet.h"

using namespace std;

    Pet::Pet()
    {
        name = "null";
        age = -1;
        owner = "null";
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
        return age;
    }

    string Pet::getOwner(){
        return owner;
    }

    bool Pet::getIsHouseTrained(){
        bool IsHT = true;
        return IsHT;
    }

    string Pet::updateName(){
        this-> name = name; //this is what i changed from prof quon's review
        return name;
    }

    int Pet::updateAge(){
        int newAge = age+1;
        return newAge;
    }

    string Pet::updateOwner(){
        string newOwner = "Beff";
        return owner;
    }

    bool Pet::setHouseTrained(){
        bool IsHT = false;
        return IsHT;
    }
