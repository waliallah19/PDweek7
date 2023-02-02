#include<iostream>
using namespace std;
void calculation(int);
main()
{
    int number;
    cout<<"Enter the number of digits: ";
    cin>>number;
    calculation(number);
}
void calculation(int number)
{
    int n;
    float p1=0.0,p2=0.0,p3=0.0,p1p=0.0,p2p=0.0,p3p=0.0;
    for(int i=1; i<=number; i++)
    {
        cout<<"Enter the digit: ";
        cin>>n;
        if(n%2 == 0)
        {
            p1 = p1 + 1;
        }
        if(n%3==0)
        {
            p2 = p2 + 1;
        }
        if(n%4 == 0)
        {
            p3 = p3 + 1;
        }
    }
    p1p = (p1/number) * 100.0;
    p2p = (p2/number) * 100.0;
    p3p = (p3/number) * 100.0;
    cout<<"P1: "<<p1p<<"%"<<endl;
    cout<<"P2: "<<p2p<<"%"<<endl;
    cout<<"P3: "<<p3p<<"%"<<endl;
}