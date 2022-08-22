#include <iostream>


using namespace std;



int main(){
    long isTrue;
    uint8_t i = 0;
    cout << "ru true or not: ";
    while (i < 100){
        cin >> isTrue;
        if (isTrue){
            cout << "true!!" << endl;
            if (isTrue > 50){
            cout<< "still true! and it's 50 why" << endl;
            } else if (isTrue <0){
                cout << "guess what, it's still true and it's negative" << endl;
            } else {
                cout << "you sent out" << isTrue <<endl;
            } 
        }
        if (!isTrue){
            cout <<"it's not true!" << endl;
            break;
        i+=1;
        }
    }
}


























/*
int main(){
    long example_input;
    cout << "Input a number to the ! :";
    cin >> example_input;
    long long factorial;
    for (uint8_t i= 1; i < example_input; ){
        factorial = factorial * i;
    }
    cout << "Factorial is of number is: " << factorial << endl;
}
*/
