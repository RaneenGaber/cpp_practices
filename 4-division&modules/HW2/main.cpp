#include<iostream>

using namespace std;

int main(){
    int n1, n2, n3, n4, n5;
    float average;
    cout<<"enter 5 number: ";

    cin>>n1>>n2>>n3>>n4>>n5;

    average = (n1+n2+n3+n4+n5) / 5;

    float first3_sum = (n1 + n2 + n3);
    float first3_ave = first3_sum / 3;

    float last2_sum = (n4 + n5);
    float last2_ave = last2_sum / 2;
    float first3_sum_over_last2_sum = first3_sum / last2_sum;
    float first3_ave_over_last2_ave = first3_ave / last2_ave;
    cout<<"the averge is: "<< average<<endl;
    cout << "sum Of First three numbers Over Sum Of Last two numbers: " << first3_sum_over_last2_sum << endl;
    cout << "average of first three numbers Over average Of Last two numbers: " << first3_ave_over_last2_ave << endl;

    return 0;
}