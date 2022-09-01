#include<iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, sum;
    int n;
    cout<<"enter the value of n: " <<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            cout<<a<<" " << endl;
            continue;
        }
        if(i==2)
        {
            cout<<b<<" " << endl;
            continue;
        }
        sum = a + b;
        a = b; 
        b = sum;
        cout<<sum<<" " <<endl;
    }
    return 0;
}
