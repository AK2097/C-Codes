#include<iostream>
using namespace std;
void alphabetcheck(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    cout<<"alphabets"<<endl;
    else
    cout<<"not alphabets"<<endl;
}

int main()
{
    char ch;
    cout<<"enter a character";
    cin>>ch;
    alphabetcheck(ch);
    return 0;
}