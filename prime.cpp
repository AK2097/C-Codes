#include<iostream>
using namespace std;

int main()
{
    int num, i;
    cout<<"enter a number";
    cin>>num;
    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            break;
        }
    }
    if(i>num/2)
    cout<<"prime number";
    else
    cout<<"not a prime number";
    return 0;
}