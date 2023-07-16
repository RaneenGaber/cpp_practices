#include<iostream>

using namespace std;

int main(){
    int cnt = 0 ;
    for(int i = 1 ; i <= 200 ; i++){
        for (int j = 1; j <= 200; j++)
        {
            for (int k = 1; k <= 200; k++)
            {
                int sum = i+j;
                int l = sum-k;
        
                    if(l >= 1 && l <= 200)
                    cnt++;

                
            }
        }
    }
    cout << cnt;
     return 0;
}