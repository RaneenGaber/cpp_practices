#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int count = 0,start = 1;
    while (count < n)
    {
        if(start % 3 == 0 && start % 4 != 0){
        cout << start << " ";
        count++;

        }
        start++;
    }

    return 0;
}