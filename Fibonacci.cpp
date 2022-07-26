#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int sum = 0;
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(sum<=n)
    {
        cout<<  sum << " ";
      a = b;
      b = sum;
      sum = a + b;
   }
   return 0;
}