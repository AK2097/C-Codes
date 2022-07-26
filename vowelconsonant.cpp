#include<iostream>
using namespace std;
void vowelorconsonant(char ch)
{
    if((ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch == 'u') || ( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
    cout <<"Vowels"<<endl;
    else
    cout <<"Consonants"<<endl;
}

int main()
{
    char ch;
    cout<<"enter a character";
    cin>>ch;
    vowelorconsonant(ch);
    return 0;
}