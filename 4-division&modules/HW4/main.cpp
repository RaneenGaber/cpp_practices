#include<iostream>

using namespace std;
int main(){
    int num;
    cout<<"enter number : ";
    cin>>num;
    num = num / 1000;
    int lastFourthDigit = num % 10;
    cout << "last Fourth digit : " << lastFourthDigit << endl;

    return 0;
}