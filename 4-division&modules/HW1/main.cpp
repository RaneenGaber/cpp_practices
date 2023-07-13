#include<iostream>

using namespace std;

int main(){
    int num ;
    bool is_even;
    cout<<"Enter the number to show is even or odd: ";
    cin>>num;
    // using %2
     is_even = num % 2 == 0;
     cout<< "is even: "<< is_even <<endl;
    // ----------------------------------------------------------------
    // using %10
    is_even = num % 10 == 0 || num % 10 == 2 || num % 10 == 4 || num % 10 == 6 || num % 10 == 8;
    cout << "is number even ? " << is_even <<endl;
    // using /10
    double x = (double) num / 2.0;
    x = x - (int)x;
    is_even = x == 0;
    cout << "is number even ? " << is_even <<endl;

    return 0 ;
}