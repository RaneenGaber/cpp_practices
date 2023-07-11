#include <iostream>

using namespace std;

int main(){
    int A,B;
    cout<<"enter A and B: ";
// B is either 1 or -1 
// if B is 1 print 2*A+2
// if B is -1 print A*A
    cin >> A>>B;
    B = (B+1)/2;
    cout <<"B is: "<<B<<endl;
    cout<< (B * (A * A)) + (-(B-1) * (2*A+1))<<endl;

    return 0;
}