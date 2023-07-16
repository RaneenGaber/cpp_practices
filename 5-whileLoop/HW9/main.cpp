#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int start = 1;
    string all_word = "";
    while(start<=n){
        string str;
        cin >> str;
        if (str == "no" || str == "No" || str == "nO" || str == "NO" ||
            str == "on" || str == "oN" || str == "On" || str == "ON")
            all_word += str;
        all_word += " ";
        start++;
    }
    cout<< all_word;
    return 0;
}