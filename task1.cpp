#include<iostream>
using namespace std;
 main()
 {
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for(int r = 1 ; r <= rows ; r++)
    {
        for(int c = 1; c <= r ; c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
 }