#include<iostream>
using namespace std;
int main(){
string registrationNumber;
string name;
char grade;
float gpa;
bool scholarship_status;

cout<<"Enter your registration number: ";
cin>>registrationNumber;
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter your grade: ";
cin>>grade;
cout<<"Enter your GPA: ";
cin>>gpa;
if ( gpa>=3.5){
    scholarship_status=true;
    cout<<"Student is eligible for scholarship"<<endl;
}
else
{
    scholarship_status=false;
    cout<<"Student is not eligible for scholarship"<<endl;
}

cout<<"Student Information:"<<endl;
cout<<registrationNumber<<"\n"<<name<<"\n"<<grade<<"\n"<<gpa<<"\n"<<scholarship_status<<endl;
}