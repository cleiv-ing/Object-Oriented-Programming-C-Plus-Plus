#include <iostream>
#include <string>

using namespace std;

void printMem(int * arr, int size){ //void printMem(int arr[], int size)
    printf("Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i< size; i++){
    printf("Value :%i at Memory Location: %p\n", arr[i], arr+i);

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

    cout << "Element 1's memory address is " << %p << "\n";
    cout << "Element 2's memory address is " << arr[1] << "\n";
    return 0;
}