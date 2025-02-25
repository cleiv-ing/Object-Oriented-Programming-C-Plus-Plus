#include <iostream>
#include "Pet.h"
using namespace std;


int main(){
    Pet Jeffrey = Pet("Jeffrey",14,"Bob",true);
    cout << Pet.getName() << endl;

    return 0;
}