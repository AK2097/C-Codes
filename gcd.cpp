#include<iostream>
using namespace std;

int main()
{
    int a,b,gcd;
    cout<<"enter two values";
    cin>>a>>b;
    int i;
    for(i = 1; i <= a && i <= b; i++)
    { 
        if((a%i==0) && (b%i==0))
        {
            gcd = i;
        }
    }
    cout<<"gcd of two numbers is:"<<gcd;
    return 0;
}