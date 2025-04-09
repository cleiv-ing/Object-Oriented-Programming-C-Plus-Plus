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
    RPG(string name, int health, int strength, int defense, string type);

    //mutators
    void setSkills(); //didn't add new parameter string
    void printAction();
    //void updateHealth(int); //new parameter is (int)
    string getType();
    void attack(RPG& opponent);
    void useSkill(RPG& opponent);
    bool isAlive();
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