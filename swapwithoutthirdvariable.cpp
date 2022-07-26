#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"the value after swap is" << " " << a << " " << b;
    return 0;

}