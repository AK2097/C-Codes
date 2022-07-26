#include<iostream>
using namespace std;

int sumofdigits(int n)
{
    int sum = 0;
    while(n!=0)
    {
        sum = sum + n % 10;
        n = n/10;
    }
    return sum;
    }

int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<"the sum of digits is:" << sumofdigits(n)<<endl;
    return 0;
}


