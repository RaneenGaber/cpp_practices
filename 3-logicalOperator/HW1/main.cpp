#include <iostream>

using namespace std;

int main(){
    int girlNum,boyNum,teacherNum;
    cout<<"Enter number of girls: ";
    cin>> girlNum;

    cout << "Enter number of boys: ";
    cin >> boyNum;

    cout << "Enter number of teachers: ";
    cin >> teacherNum;

    cout<< (boyNum>25)<<endl;
    cout << (girlNum <= 30) << endl;
    cout<< (boyNum > 20 && teacherNum > 2 || girlNum > 30 && teacherNum > 4)<<endl;
    cout << (boyNum < 60 || girlNum < 70) << endl;
    cout << (!(boyNum >= 60 || girlNum >= 70)) << endl;
    cout << (boyNum == girlNum + 10) << endl;
    cout << ((boyNum - girlNum)  > 10 || teacherNum > 5) << endl;
    cout << (boyNum == girlNum + 10 || girlNum  == boyNum + 15) << endl;

    return 0;
}