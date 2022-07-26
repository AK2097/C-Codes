#include<iostream>
using namespace std;

int main()
{
    int num, temp, rem = 0, sum = 0;
    cout<<"enter a number";
    cin>>num;
    temp = num; 

    while(temp!=0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }
    if(sum == num)
    cout<<"It is an armstrong number" <<endl;
    else
    cout<<"It is not an armstrong number" <<endl;
    return 0;
}