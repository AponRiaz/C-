
#include<iostream>
#include<conio.h>
using namespace std;
class Person
{
public:
   virtual void display()
    {
    cout<<"I am a Person: "<<endl;
    }

};
class Student : public Person{

public:
     void display()
{
   cout<<"I am a student: "<<endl;
}
};
class Teacher : public Person{
    public:
    void display()
{
    cout<<"I am a Teacher: ";
}
};


int main(){
Teacher t;
Student s;
Person *p;

p=&s;
p->display();
p=&t;
p->display();
getch();
}
