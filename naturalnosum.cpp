#include<iostream>
using namespace std;
int main()
{
    int i, n;
    int sum = 0;
    cout<<" enter a number";
    cin>>n;
    for(i=1 ; i<= n; i++)
    {
        sum = sum + i;
    }
    cout<<"sum of natural numbers is: " << sum;
    return 0;
}