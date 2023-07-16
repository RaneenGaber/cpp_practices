#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,m;
    cout<<"enter two number: ";
    cin>>n>>m;
    int start = 1;
    while(start<=n){
        int start1 =1;
        while(start1 <= m){
            cout << start  << " * "<<start1 <<" = "<<start*start1<<endl;
            start1++;
        }
       start++;
    }
    return 0;
}