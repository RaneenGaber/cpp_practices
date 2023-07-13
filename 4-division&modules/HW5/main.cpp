#include<iostream>

using namespace std;

int main(){
    float a,b;
    cout<<"enter two integer number: ";
    cin>>a>>b;
    float fractionPart = (a/b) - (int)(a/b);
    cout<<"fraction part is "<<fractionPart<<endl;

    return 0;
}