/*
Libraries

Function prototypes (OR HEADER FILES)

Functions/Main

*/
#include <iostream>

bool doesThisWork(int test_number);

int main(){
    doesThisWork(100);
}

bool doesThisWork(int test_number){
    if (test_number > 10){
        std::cout << "yess!!!!" << std::endl;
    }
    return true;
}