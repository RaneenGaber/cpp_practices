#include <iostream>

using namespace std;

int main(){
    int number1, number2,number3=-1;
    cout<<"enter two number to swap them: ";
    cin>>number1>>number2;
    number3 = number1;
    number1 = number2;
    number2 = number3;
    cout << "number1 is: " << number1 <<"\nnumber2 is: " <<number2 <<endl;

    return 0;
}