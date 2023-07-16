#include<iostream>

using namespace std;

int main(){
    int start,end;
    cout<<"enter width and height to draw right angle triangle: ";
    cin>>start>>end;
    while(start<=end){
        int count = start;
        while (count--)
        {

            cout << "*";
        }
        cout << endl;

        start++;
    }

    return 0;
}