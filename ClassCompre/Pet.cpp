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

    void Pet::getName(string name){
        this->name = name;
    }

    void Pet::getAge(int age){
        this->age = age+1;
    }

    void Pet::getOwner(string owner){
        owner = owner;
    }

    void Pet::getIsHouseTrained(bool IsHT){
        IsHT = IsHT;
    }

    void Pet::updateName(string name){
        this->name = name;
    }

    void Pet::updateAge(int age){
        this->age = age+1;
    }

    void Pet::updateOwner(string owner){
        owner = owner;
    }

    void Pet::setHouseTrained(bool setHouseTrained){
        setHouseTrained = setHouseTrained;
    }
