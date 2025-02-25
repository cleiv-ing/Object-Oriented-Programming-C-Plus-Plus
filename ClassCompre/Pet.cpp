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
        age = 14;
    }

    void Pet::getOwner(string owner){
        owner = "Bob";
    }

    void Pet::getIsHouseTrained(bool IsHT){
        IsHT = true;
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
