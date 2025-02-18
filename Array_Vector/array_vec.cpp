#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printString(string *arrStr, int sizeStr){
    printf("Each string is worth %lu bytes\n", sizeof(arrStr[0]));
    for(int p = 0; p< sizeStr; p++){
    printf("Value:%s at Memory Location: %p\n", arrStr[p].c_str(), arrStr+p);
}
}


void printMem(int * arr, int size){ //void printMem(int arr[], int size)
    printf("Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i< size; i++){
    printf("Value:%i at Memory Location: %p\n", arr[i], arr+i);

    }

}

int main(){
    const int size = 5;
    int arr[size] = {1,2,3,4,5};
    printMem(arr,size);
    
    int element_replace = 5;
    int new_value = 500;
    
    arr[element_replace] = new_value;

    cout << "The value at index 5 is " << arr[element_replace] << "\n";


    printf("The address for %i is Memory Location: %p\n", arr[0], arr+0);
    printf("The address for %i is Memory Location: %p\n", arr[1], arr+1);

//new string array
    const int sizeStr = 5;
    string arrStr[sizeStr] = {"Bonjour", "Kamusta", "Hola", "Ciao", "Hallo"};
    printString(arrStr, size);

//new vector
    vector <double> vec = {1,2,3,4,5};

    vec.push_back(6);
    vec.push_back(7);

    cout << "The number of elements in the vector is " << vec.size() << "\n";
    vec.pop_back();
    cout << "The new number of elements in the vector is " << vec.size() << "\n";

    return 0;
}