#include <iostream>
#include <string>
#ifndef PET_H
#define PET_H

using namespace std;

class Pet{

    public:
    //constructors
        Pet();
        Pet(string, int, string, bool);
        
        //mutator
        void updateName(string);
        void updateAge(int);
        void updateOwner(string);
        void setHouseTrained(bool);

        //accessor        
        void getName(string);
        void getAge(int);
        void getOwner(string);
        void getIsHouseTrained(bool);

    private:
        string name;
        int age;
        string owner;
        bool IsHouseTrained;

};
#endif