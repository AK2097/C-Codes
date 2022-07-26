#include<iostream>
using namespace std;

int main()
{
    int a, b, lcm;
    cout<<" enter the value of two numbers";
    cin>>a>>b;
    lcm = (a>b)? a : b;
    do
    {
      if(lcm % a == 0 && lcm % b == 0)
      {
        cout<<"lcm of two number is" << lcm;
        break;
      }
      lcm ++;
          } while (1);
          return 0;
    
}