#include <iostream>
using namespace std;
int calculation(int);
main()
{
    int num,result;
    cout << "Enter number of sequences of trianhle: ";
    cin >> num;
    result = calculation(num);
    cout << "Number of dots are: " << result;
}
int calculation(int num)
{
    int dots=0;
  for(int i=num; i>=1;i--)
  {
    dots = dots + i;
  }
  return dots;
}