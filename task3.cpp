#include <iostream>
using namespace std;
void upper(int);
void lower(int,int);
main()
{
    int rows, half;
    cout << "Enter number of rows: ";
    cin >> rows;
    half = rows / 2;
    upper(half);
    lower(half,rows);
}
void upper(int half)
{
    int count = 1;
    for (int sp = half; sp > 1; sp--)
    {
        for (int j = 0; j < half; j++)
        {
            if (sp - j > count)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
void lower(int half,int rows)
{
    int count=1;
     for (int sp = half; sp > 1; sp--)
    {
        for (int j = half; j >0; j--)
        {
            if (sp - j < count)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}