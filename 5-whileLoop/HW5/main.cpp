#include <iostream>

using namespace std;

int main()
{
    int n ;
     cout << "enter number: ";
     cin>>n;
    int n1 = n;
    int star_count = 1;
    int star_count1 = 2*n1-1;
    

    while (n > 0)
    {
        int line = 1;

        while (line <= n*2-1)
        {
            if (line == n)
            {
                int count = star_count;
                while (count-- > 0)
                {
                    cout << "*";
                }
                line++;
                continue;
            }
            cout << " ";
            line++;
        }
        cout << endl;
        star_count += 2;
        n--;
    }
   
   int start = 1;
    while ( start <= n1)
    {
        int row = 1;
        while (row <= 2 * n1 - 1)
        {
            if (row==start)
            {
                int count = star_count1;
                while (count-- > 0)
                {
                    cout << "*";
                }
                row++;
                continue;
            }
            cout << " ";
            row++;
        }
        cout << endl;
        star_count1 -= 2;
        start++;
    }

    return 0;
}