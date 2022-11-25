#include<iostream>
#include<conio.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
};
class student:public Person
{
public:
    int id;

};

int main(){

    student ss;
    ss.id=20-42905-1;
    ss.age=23;
    ss.name="Apon";

  cout<<"Student Id: "<<ss.id<<endl;
  cout<<"Age : "<<ss.age<<endl;
  cout<<"name: "<<ss.name;

}

