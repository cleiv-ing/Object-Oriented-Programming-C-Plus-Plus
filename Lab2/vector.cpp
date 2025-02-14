#include <iostream>
#include <vector>
using namespace std;

/*
@brief prints the elements in the vector and their memory locations
@ param v - vector of integers

*/

void printMemVec(vector<int> &vec, int size){
    for(int i = 0; i< vec.size(); i++)
        printf("Value :%i at Memory Location %p\n", vec[i], &vec[i]);

}

void incVecBy10(vector<int> &vec, int SIZE){
for (int i = 0; i<SIZE; i++)
    vec[i] += 10;
}

int main(){

    const int SIZE = 5;
    vector <int> vec(SIZE);

    for (int i = 0; i<SIZE; i++){
        vec[i] = i + 100;
    }

    printf("Before Increment------\n");
    printMemVec(vec,SIZE);
    incVecBy10(vec,SIZE);
    printf("After--------\n");
    printMemVec(vec,SIZE);

    vec.pop_back();
    printf("After Pop--------\n");
    printMemVec(vec,SIZE);

    vec.push_back(101);
    vec.push_back(102);
    printf("After Push-------\n");
    printMemVec(vec,SIZE);
    return 0;
}
    