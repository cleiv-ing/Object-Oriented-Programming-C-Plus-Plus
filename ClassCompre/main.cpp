#include <iostream>
#include "Pet.h"
using namespace std;


int main(){
    Pet jeff = Pet("Jeffrey",14,"Bob",true);
    Pet unknown = Pet();

    printf("Name: %s \tAge: %i \tOwner: %s IsHouseTrained: %i\n"), jeff;
    printf("Name: %s \tAge: %i \tOwner: %s IsHouseTrained: %i\n"), unknown;

    return 0;
}