#include<iostream>
#include<string>

using namespace std;

int main(){
    int t ;
    cout<<"enter number of test case: ";
    cin>>t;
   
    while(t--){
        int n;
        cout << "Enter number of intger: ";
        cin>>n;
        int min ;
        int start=1;
        while(start<=n){
            int n;
            cin>>n;
            if(start==1)
             min = n;
            if(n < min){
                min = n;
            }
            start++;
        }
        cout <<min<<endl;
    }

    return 0;
}