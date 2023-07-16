#include<iostream>

using namespace std;

int main(){
    int start,end;
    cout<<"enter two number to draw right triangle them: ";
    cin>>start>>end;
    while(end--){
        int count = end;
        while (count--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}