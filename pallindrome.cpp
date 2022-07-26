#include<iostream>
using namespace std;

int main()
{
    int num, temp, rev = 0, rem;
    cout<<"enter a number";
    cin>>num;
    temp = num;

    while(temp!=0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp/10;
    }
    if(rev == num)
    cout<<"It is a PALLINDROME NUMBER"<<endl;
    else
    cout<<"It is not a PALLINDROME NUMBER"<<endl;
    return 0;
}