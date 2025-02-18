#include <iostream>
#define RPG_H

using namespace std;

/*
    @brief sets the skills based on the RPG's role

*/


class RPG{
    public:
    //constructors
    RPG();
    RPG(string name, int health, int strength, int defense, string type);


    private:
    //everythin
    string type; //warrior, mage, thief, archer
    string skills[SKILL_SIZE] = 2;

    //added
    void setSkills();
    void printAction(string,RPG);
    void updateHealth(int);
    void attack(RPG*);
    void useSkill(RPG*);
    const bool isAlive();
    const string getName();
    const int getHealth();
    const int getStrength();
    const int getDefense();
};
#endif


void RPG::setSkills(){
    if (type == "mage"){
        skills[0] = "fire";
        skills[1] = "thunder";
    } else if (type == "thief"){
        skills [0] = "pilfer";
        skills [1] = "jab";
    } else if (type == "archer"){
        skills [0] = "parry";
        skills [1] = "crossbow_attack";
    } else {
        skills [0] = "slash";
        skills [1] = "parry";
    }
    
}

void RPG::printAction(string skill, RPG opponent){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str));
}

void updateHealth(newHealth){

}

void isAlive(){
    
}