#include<iostream>

using namespace std;

int main(){
    int start,end;
    cout<<"enter two number to print range between them: ";
    cin>>start>>end;
    while(start<=end){

        cout << start << endl;
        start++;
    }

    return 0;
}