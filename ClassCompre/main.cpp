#include <iostream>
#include "Pet.h"
#include <string>
#include <sstream>
using namespace std;


int main(){
    Pet jeff = Pet(name, 14,"Bob", true);
    Pet unknown = Pet();

   // void Pet()
   // {
   //     cout << jeff << endl;
    //}
    printf("Name: %s \tAge: %i \tOwner: %s IsHouseTrained: %i\n"), jeff;
    printf("Name: %s \tAge: %i \tOwner: %s IsHouseTrained: %i\n"), unknown;

    return 0;
}