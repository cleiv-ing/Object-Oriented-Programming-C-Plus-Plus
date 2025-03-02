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
        string updateName();
        int updateAge();
        string updateOwner();
        void setHouseTrained();

        //accessor        
        string getName();
        int getAge();
        string getOwner();
        bool getIsHouseTrained();

    private:
        string name;
        int age;
        string owner;
        bool IsHouseTrained;

};
#endif