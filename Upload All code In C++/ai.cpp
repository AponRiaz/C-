#include<iostream>
using namespace std;
class man{
public:
string poperty;
float Account;
int vehicle;
};
class idris:public man{
public:
    int bike;
    int car;

};
class tamim:public man{
public:
    //int id;
    string gf;

};
class siam:public man{
public:
    //int id;
    int laptop;
    float moneybag;
};

    class akil:public man{
public:
    //int id;
    int chair;
    int hotel;


};
int main()
{
            tamim ab;
    ab.poperty="10lac";
    ab.Account=100;

     ab.gf="sundori";


    cout<<"Poperty:  "<<ab.poperty<<endl;
        cout<<"Account: "<<ab.Account<<endl;

    cout<<"Gf: "<<ab.gf<<endl;





}
