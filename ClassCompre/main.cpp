#include <iostream>
#include "Pet.h"
#include <string>
#include <sstream>
using namespace std;


int main(){
    Pet jeff = Pet("Jeff", 14, "Bob", true);
    Pet unknown = Pet();

    //printf("Name: %s \tAge: %i \tOwner: %s \tIsHouseTrained: %i\n", jeff.getName(),jeff.getAge(),jeff.getOwner(),jeff.getIsHouseTrained()); didn't work

    cout << "Pet's name is: " << jeff.getName() << "\n";
    cout << "Age of pet is: " << jeff.getAge() << "\n";
    cout << "Owner of " << jeff.getName() << " is " << jeff.getOwner() << "\n";
    cout << "House trained? 1 = yes. 0 = no. " << jeff.getIsHouseTrained() << "\n";


    //printf("Name: %s \tAge: %i \tOwner: %s IsHouseTrained: %i\n"); did't work

    cout << "\n";

    
    cout << "Pet's name is: " << unknown.getName() << "\n";
    cout << "Age of pet is: " << unknown.getAge() << "\n";
    cout << "Owner of " << unknown.getName() << " is " << unknown.getOwner() << "\n";
    cout << "House trained? 1 = yes. 0 = no. " << unknown.setHouseTrained() << "\n";



    
    return 0;
}