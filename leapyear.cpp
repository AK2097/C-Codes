#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"enter a year";
    cin>>year;
    if( year%4 == 0)
    {
        if(year%100 == 0)
        {
            if(year%400 == 0)
            cout<<"It is a leap year"<<year<<endl;
            else 
            cout<<"It is not a leap year";
            }
            else
            cout<<"It is a leap year";
        }
        else
        cout<<"It is not a leap year";
        cout<<endl;
        return 0;
    }
