#include<iostream>
using namespace std;

// base class
class Employee
{
  public:
  int id;
  public:
  float salary;
  public:
      Employee(int inpID)
      {
        id=inpID;
        salary=34.0;
      }
      Employee(){}
};

//derived class syntax
/*class {{derived-class name}} : {{visibility-mode} {base-class-name}}
{
  class members/methods/etc...
}*/

//creating a Programmer class derived from Employee Base class

class Programmer : public Employee
{
  public:
  Programmer(int inpID)
  {
    id=inpID;
  }
  int languageCode = 9;
  void getData(){
    cout<<id<<endl;
  }

};

int main()
{
 Employee harry(1), rohan(2);
 cout<<harry.salary<<endl;
 cout<<rohan.salary<<endl;
 Programmer SkillF(1);
 cout<<SkillF.languageCode<<endl;
 cout<<SkillF.id<<endl;
 SkillF.getData();
return 0;
}
