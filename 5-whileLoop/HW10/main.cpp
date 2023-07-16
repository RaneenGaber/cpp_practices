#include<iostream>
#include<string>

using namespace std;

int main(){
    int n ;
    cout<<"enter number: ";
    cin>>n;
   int rev = 0;
    while(n != 0){
        int last_digit = n%10;
        n /= 10;
        rev = rev*10 + last_digit;

        
    }
    cout << rev << endl
         << rev*3;

    return 0;
}