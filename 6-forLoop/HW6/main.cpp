#include<iostream>

using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int sum = 0 ;
    for(int i=1 ; i<=n ; i++){
        int sum_digit = 0;
        int value = i;
        while(value){
            sum_digit += value % 10;
            value /= 10;
        }
        if(a <= sum_digit && sum_digit <= b){
            cout<<"value "<<i<<endl;
            sum += i;
        }
    }
    cout<<sum<<endl;
  
    return 0;
}