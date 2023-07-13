#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter number of days : ";
    cin>>num;
    int numOfYears = num / 360;
    num = num - numOfYears * 360;
    int numOfMonths = num / 30;
   
    num = num - numOfMonths * 30;
    int numOfDays = num ;

    cout<<"number of years is: "<<
    numOfYears<<" number of months is: "<<
    numOfMonths<<" number of days is: "<<numOfDays<<endl;

    return 0;
}