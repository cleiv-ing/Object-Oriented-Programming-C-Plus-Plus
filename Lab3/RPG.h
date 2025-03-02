#include <iostream>
#include <string>
#ifndef RPG_H //ifndef MUST be above #define
#define RPG_H
using namespace std;

const int SKILL_SIZE =2;

class RPG{
    //constructors
    public:
    RPG();
    RPG(string, int, int, int, string);

    //mutators
    void setSkills();
    void printAction();
    void updateHealth();
    string getType();
    //void attack();
    //void useSkill();
    //bool isAlive();
    const string getName();
    const int getHealth();
    const int getStrength();
    const int getDefense();

    private:
    string name;
    int health;
    int strength;
    int defense;
    string type; //warrior, mage, thief, archer
    string skills[SKILL_SIZE];
   
};
#endif