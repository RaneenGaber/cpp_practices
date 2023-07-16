#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cout << "enter number of test cases: ";
    cin >> t;

    while (t--)
    {
        int n;
        cout << "enter numbers: ";
        cin >> n;
        int special_sum = 0;
        int start = 1;
        while (start <= n)
        {
            int num;
            cin >> num;
            int mul = 1;
            int pos = start;
            while (pos>0)
            {
                mul *= num;
                pos--;
            }

            special_sum += mul;
            start++;
        }
        cout <<"special sum: "<<special_sum << endl;
    }
    return 0;
}