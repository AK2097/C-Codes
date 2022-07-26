#include<iostream>
using namespace std;

int main()
{
    int start, end;
    int sum = 0;
    cout<<"enter the start number";
    cin>>start;
    cout<<"enter the end number";
    cin>>end;
    int i;
    for(i=start; i <= end; i++)
    {
        sum = sum + i;
    }
    cout<<"the sum of natural number is:" << sum << endl;
    return 0;
}
