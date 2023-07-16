#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int start = 0;
    while(start<=n){
        if(start%8==0 || start%3==0 && start%4==0){

        cout << start <<" ";
        }
        start++;
    }

    return 0;
}