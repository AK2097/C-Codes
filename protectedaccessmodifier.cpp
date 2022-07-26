#include<iostream>
using namespace std;

class Base
{
    protected:
    int a;
    private:
    int b;
};

class Derived : public Base
{

};

int main()
{
    Base b;
    Derived der;
    cout<<der.a;
    return 0;
}