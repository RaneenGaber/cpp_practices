#include<iostream>

using namespace std;

int main(){
    int num;
    char special;

    cout<<"enter two number to print range between them: ";
    cin >> num >> special;
    while (num--)
    {
        cout << special;
    }

    return 0;
}