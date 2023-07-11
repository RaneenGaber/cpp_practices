#include <iostream>

using namespace std;

int main(){
    int n1,n2,n3,n4;
    cout <<"enter 3 number to swap them: ";
    cin >> n1 >> n2 >> n3;
    n4=n1;

    n1=n2;
    n2=n3;
    n3=n4;
    cout << n1 << " " << n2 << " " << n3 <<endl;

    return 0;
}