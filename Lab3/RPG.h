#include <iostream>
#define RPG_H

using namespace std;

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

int main(){



    return 0;
}