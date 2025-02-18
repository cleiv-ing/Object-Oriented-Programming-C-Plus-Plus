#include <iostream>
#include <string>

using namespace std;

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

    printf("The subtraction of these two addresses is %p\n", arr[0]-arr[1],arr+0-arr+1);
    
    
    return 0;
}