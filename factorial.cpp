#include<iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    int i = 1;
    cout<<"enter a number";
    cin>>n;
    for( i=1; i<=n ; i++)
    {
        fact = fact*i;
    }
cout<<"factorial of a number is:" << fact;
return 0;
}
 