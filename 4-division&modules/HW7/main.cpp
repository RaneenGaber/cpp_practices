#include<iostream>

using namespace std;

int main(){
    int num ;
    cout<<"enter number to check it even or odd: ";
    cin>>num;
    bool isEven = num%2 == 0;
    bool isOdd = 1-isEven;

    int result = isEven * 100 + isOdd * 7;
    cout<<result<<endl;

    return 0;
}