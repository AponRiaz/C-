#include<iostream>
using namespace std;
class Animal{
public:
    void animalhagu(){
    cout<<" AAMAAL : "<<endl;
    }

};
class Dog:public Animal{

public:
    void animalhagu(){
        cout<<" Dog : "<<endl;

    }
};
    class Cat:public Animal{
public:
    void animalhagu(){
        cout<<" Cat : "<<endl;

    }

};
int main()
{
    Animal siam;
    Dog sia;
    Cat M;
    siam.animalhagu();
    sia.animalhagu();
    M.animalhagu();
}

