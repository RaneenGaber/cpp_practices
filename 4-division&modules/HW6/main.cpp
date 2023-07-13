#include<iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"enter two number: ";
    cin>>a>>b;
    int a_divide_b = a/b;
    int modulo = a - a_divide_b * b;
    cout<<a<<" modulo "<<b<<" is: "<<modulo<<endl;
    return 0;
}