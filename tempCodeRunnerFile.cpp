#include<iostream>
using namespace std;

int main()
{
    int a, b, lcm;
    cout<<"enter the value of a :";
    cin>>a;
    cout<<"enter the value of b :";
    cin>>b;
    lcm = (a>b) ? a : b;

    while(flag)
    {
        if(lcm % a == 0 && lcm % b == 0)
        {
            cout<<"lcm is" << lcm;
            break;       
         }
         ++lcm;
    }
    return 0;

}