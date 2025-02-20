#include <iostream>
#include <string>
#define Pet.h
#ifndef Pet.h

using namespace std;

class Pet{

    public:
    //constructors
    Pet();
    Pet(string name, int age, string owner, bool isHouseTrained);
    void getName(string);
    void getAge(int);
    string getOwner(string);
    bool getIsHouseTrianed(bool);
    void updateName(string);
    void updateAge();
    void updateOwner(string);
    void setHouseTrained();

    private:
    string name;
    int age;
    string owner;
    bool isHouseTrained;

};
#endif