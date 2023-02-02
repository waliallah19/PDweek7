#include <iostream>
using namespace std;
void triangle(int r);

main()
{
    int r;

    cout << "Enter Number of rows: ";
    cin >> r;

    triangle(r);
}

void triangle(int r)
{
    int spaces = r;
    for (int count1 = 0; count1 <= r; count1++)
    {
        for (int count2 = 1; count2 <= count1; count2++)
        {
            cout << "*";
        }
        for (int j = spaces; j >= 0; j--)
        {
            cout << " ";
        }

        for (int j = spaces; j >= 0; j--)
        {
            cout << " ";
        }

        for (int count2 =1; count2 <= count1; count2++)
        {
            cout << "*";
        }

        spaces--;

        cout << endl;
    }
}