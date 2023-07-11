#include <iostream>
#include <string>

using namespace std;

int main(){
    string name1, name2;
    int id1, id2;
    float grade1, grade2;
    cout<<"What is the name of the first student: ";
    cin>>name1;
    cout << "His ID: ";
    cin >> id1;
    cout << "His math exam grade: ";
    cin >> grade1;
    cout << "What is the name of the second student: ";
    cin >> name2;
    cout << "His ID: ";
    cin >> id2;
    cout << "His math exam grade: ";
    cin >> grade2;

    cout<<"student grades in math \n"<<name1<<" with id("<<id1<<") got grade: "<<grade1<<endl;
    cout << name2 << " with id(" << id2 << ") got grade: " << grade2 << endl;
    cout << "Average grades is " <<(grade1+grade2)/2<< endl;

    return 0;
}