#include <iostream>
using namespace std;

int main()
{
 int age ;
 float height;
 string name;
 bool residentofFSD;
 int conditioncheck;
 cout<<"Enter your age: ";
 cin>>age;
 cout<<"Enter your height: ";
    cin>>height;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Are you a resident of FSD? (1 for Yes, 0 for No): ";
    cin>>conditioncheck;

    if (conditioncheck==1)
    { residentofFSD=true;
        cout<<"Person is a resident of FSD"<<endl;}
    else
    {
        residentofFSD=false;
     cout<<"Person is not a resident of FSD"<<endl;}

    cout<<"Your information:"<<endl;
    cout<<age<<"\n"<<height<<"\n"<<name<<endl;
}