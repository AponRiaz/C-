#include<iostream>
#include<conio.h>
using namespace std;
class Person
{
public:
    void display()
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
Person p;

t.display();
s.display();
p.display();
getch();
}
