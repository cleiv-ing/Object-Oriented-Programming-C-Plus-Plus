#include <iostream>
using namespace std;

//functions
int coord(int,int);
int move(int, int);


int main(){

    
}

int coord(int, int){
    
    
    



}

int move(int, int){
    //we're starting at some point on the 2D array
    //we'll make it the origin
        int x_direction = 0;
        int y_direction = 0;

        int x_move = 0; //initialize as 0
        int y_move = 0;

        //we have a user inputting values for now until we can automate
        cout << "Press either 0 (left) or 1 (right) for the x-axis";
            cin >> x_move;

        cout << "Press either 0 (up) or 1 (down) for the y-axis";
            cin >> y_move;

    //updating the _move fxn
        int x_move = x_direction + x_move;
        int y_move = y_direction + y_move;

        return (x_move, y_move);
}