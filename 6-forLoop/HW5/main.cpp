#include <iostream>

using namespace std;

int main()
{
    int n ;
     cout << "enter number: ";
     cin>>n;
     for(int i=2 ; i<=n ; i++){
        bool flage = true;
        for(int j=2 ; j<i ; j++){

            if(i%j == 0){
                flage = false;
                break;
            }

        }
        if(flage){
            if(i==2){
                cout << i;
            }else
            cout<<","<<i;
        }

     }
   

    return 0;
}