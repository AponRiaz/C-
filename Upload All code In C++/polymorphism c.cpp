#include<iostream>
using namespace std;
int Add(int a ,int b){

return a+b;

}
float Add(double a, double b)
{
    return a+b;
}
float Add(int a,double b)
{
    return a+b;
}

int Add(int a,int b,int c)
{
    return a+b+c;
}

string Add(string a,string b)
{
    return a+b;
}







int main(){
cout<<"Sum1:"<<Add(1,2,3)<<endl;
cout<<"Sum1:"<<Add(1.201,2.301)<<endl;
cout<<"Sum1:"<<Add(1,2.2)<<endl;
cout<<"Sum1:"<<Add("apu","zime")<<endl;






};
