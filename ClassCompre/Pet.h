#include <iostream>
#include <string>
#ifndef PET_H
#define Pet

using namespace std;

class Pet{

    public:
    //constructors
    Pet(string name; int age; string owner; bool IsHouseTrained;);
    
    //mutator
    void updateName(string name);
    void updateAge(int new_age);
    void updateOwner(string adopter);
    void setHouseTrained(bool setHouseTrained);

    //accessor        
    void getName(string name);
    void getAge(int age);
    string getOwner(string owner);
    bool getIsHouseTrianed(bool IsHouseTrained);

    private:
    string name;
    int age;
    string owner;
    bool isHouseTrained;

};
#endif