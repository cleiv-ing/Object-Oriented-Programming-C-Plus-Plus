#include <iostream>
#define RPG_H

using namespace std;

class RPG{
    public:
    //constructors
    RPG();
    RPG(string name, int health, int strength, int defense, string type);


    //everything else

    private:
    //everythin
    string type; //warrior, mage, thief, archer
    string skills[SKILL_SIZE];
}
#endif

int main(){



    return 0;
}