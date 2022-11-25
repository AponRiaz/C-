#include<iostream>
using namespace std;
int add(int a,int b)
{
    int c=a+b;
return c;

}
float mul(float a,float b)
{
float c=a*b;
return c;

}
float div(float a,float b)
{
    float c=a/b;
return c;

}
float sub(float a,float b){
float c=a-b;
return c;

}

int main()

{
    string i;
cout<<"you want to run the code 'Y'or'N'"<<endl;
    cin>>i;
    while((i=="Y")||(i=="y"))
        {
                float a,b;
cout<<"Enter a number: ";
cin>>a;
cout<<"Enter a number: ";
cin>>b;
int choice;
cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"Enter Your Choice(1-5): ";
        cin>>choice;


   switch(choice)
        {
           case 1:

           cout<<"Result of add:"<<add(a,b)<<endl;
           break;
            case 2:
                cout<<"Result of sub:"<<sub(a,b)<<endl<<endl;

                break;
            case 3:
               cout<<"Result of mul:"<<mul(a,b)<<endl;


                break;
            case 4:
               cout<<"Result of div:"<<div(a,b)<<endl;

                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
        cout<<"\n------------------------\n";
    }
cout<<"you want to run the code 'Y'or'N'"<<endl;
    cin>>i;


}






