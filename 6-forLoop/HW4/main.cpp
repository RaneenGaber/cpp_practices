#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter number to show is prime or not: ";
    cin>>n;
    bool flage = true;
    for(int i=2 ; i<n ; i++){
        
        if(n%i == 0){
            cout<<"No";
            flage = false;
            break;
        }

    }
    if(flage){
        cout<<"true";
    }
    return 0;
}