#include<iostream>

using namespace std;

int main(){
  int cnt = 0 ;
    for(int i = 50 ; i<=300 ; i++){
        for(int j = 70 ; j<=400 ;j++){
            if (j > i)
                break;

            if((i+j) % 7 == 0)
            cnt++;
            
        }
    }
    cout <<cnt;

    return 0;
}