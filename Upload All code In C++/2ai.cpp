#include<bits/stdc++.h>
using namespace std;
void Union(string a)
{
    string b;
    if(a=="aUb")
    {
        cout<<"User given string:";
        cin>>b;
     if(b=="a"||b=="b")
     {
         cout<<"valid";
     }
     else
     {
         cout<<"invaild";
     }
    }
    else
    {
        cout<<"not for this";
    }
}
int main()
{
    string a;
    cout<<"User given regular expresion:";
    cin>>a;
    Union(a);
    return 0;

}
