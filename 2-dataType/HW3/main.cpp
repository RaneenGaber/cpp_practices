#include <iostream>

using namespace std;

int main(){
    int number1, number2,number3,number4,number5,number6,number7,number8;
    cout<<"enter 8 number: ";
    cin>>number1>>number2>>number3>>number4>>number5>>number6>>number7>>number8;
    int sumOfEven = number2+number4+number6+number8;
    int sumOfOdd = number1 + number3 + number5 + number7;

    cout<<"the sum of even number is "<<sumOfEven<<endl;
    cout << "the sum of odd number is " <<sumOfOdd<<endl;

    return 0;
}