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
    void printAction(string,RPG);
    void updateHealth(int);
    //void attack(RPG*);
    void useSkill(RPG*);
    bool isAlive(bool) const;
    const string getName(string);
    const int getHealth(int);
    const int getStrength(int);
    const int getDefense(int);

    private:
    string name;
    int health;
    int strength;
    int defense;
    string type; //warrior, mage, thief, archer
    string skills[SKILL_SIZE];
   
};
#endif