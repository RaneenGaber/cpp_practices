#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    float sum_of_even = 0;
    float sum_of_odd = 0;
    float ave_of_even;
    float ave_of_odd;

int start = 1;
    while(start <= n){
        int n1;
        cout<<"enter number of "<<start<<" :";
        cin>> n1;
        if(start%2==0){
            sum_of_even += n1;
        }else{
            sum_of_odd += n1;
        }
    start++;
    }
    if(n%2==0){
        ave_of_even = sum_of_even/(n/2);
        ave_of_odd = sum_of_odd / ((n+1) / 2);
    }else {
        ave_of_even = sum_of_even / (n / 2);
        ave_of_odd = sum_of_odd / ((n+1) / 2);
    }
    cout<<"ave_of_even is:"<<ave_of_even<<endl;
    cout << "ave_of_odd is:" << ave_of_odd << endl;

    return 0;
}