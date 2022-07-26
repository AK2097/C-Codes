#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter a character";
    cin>>ch;
    if(ch >= 65 && ch <= 90)
    cout<<"uppercase letters"<<endl;
    else if(ch >= 97 && ch <= 122)
    cout<<"lowercase letters"<<endl;
    else if(ch >=48 && ch <= 57)
    cout<<"digits"<<endl;
    else
    cout<<"special symbols"<<endl;
    return 0;
}