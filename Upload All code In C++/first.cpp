#include<iostream>
using namespace std;
float Add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
   float a,b;
    cout<<"enter number";
    cin>>a;
      cout<<"enter another number";
         cin>>b;
        // float v;
         //Add(a,b);
         cout<<"sum of value:"<<Add(a,b);



    return 0;
}
