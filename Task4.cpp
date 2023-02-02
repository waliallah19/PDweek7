#include <iostream>
using namespace std;
void calculation(int);
main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    calculation(num);
}
void calculation(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if(i%4!=0)
        {
            cout<<i<<",";
        }
        else
        {
            cout<<10*i<<",";
        }
    }
}