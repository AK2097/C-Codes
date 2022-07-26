#include<iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout<<"enter the number";
    cin>>n;
    for(count = 0 ; n >0 ; count++)
    {
        n = n/10;
    }
    cout<<"total number of digits is:" << count << endl;
    return 0;
}