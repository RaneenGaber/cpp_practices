#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    int lastDigit = num % 10;
    num = num / 10;
    int secondLastDigit = num % 10;
    num = num / 10;

    int thirdLastDigit = num % 10;
    num = num / 10;
    int sumOfLastThreeDigit = lastDigit + secondLastDigit + thirdLastDigit;
    cout << "sum Of Last Three Digit: " << sumOfLastThreeDigit<<endl;
     return 0;
}