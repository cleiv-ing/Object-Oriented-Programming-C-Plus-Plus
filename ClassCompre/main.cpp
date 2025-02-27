#include <iostream>
#include "Pet.h"
#include <string>
#include <sstream>
using namespace std;


int main(){
    Pet jeff = Pet("Jeff", 14,"Bob", true);
    Pet unknown = Pet();

    cout << jeff.getName();
   
    printf("Name: %s \tAge: %i \tOwner: %s IsHouseTrained: %i\n", jeff.getName(),jeff.getAge(),jeff.getOwner(),jeff.getIsHouseTrained());
    printf("Name: %s \tAge: %i \tOwner: %s IsHouseTrained: %i\n"), unknown;

    return 0;
}