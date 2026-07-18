#include<iostream>
#include<iomanip>
using namespace std;
int main() {
   cout<<left;
   /* width = minimum number of characters to use.
If the value is shorter than the width, spaces are added.
setw() affects only the next output.*/
cout << setfill('*'); 
cout <<setw(15) <<"Name"<< setw(10) <<"Age"<< setw(10) <<"Gender"<< endl;
cout <<setw(15) <<"John"<< setw(10) <<25<< setw(10) <<"Male"<< endl;
}
/*Manipulator	Header	Purpose	Example
left	<iomanip>	Left-align output	cout << left;
right	<iomanip>	Right-align output	cout << right;
setw(n)	<iomanip>	Set width of next output	cout << setw(10);
setfill(ch)	<iomanip>	Fill empty spaces	cout << setfill('*');
setprecision(n)	<iomanip>	Set decimal precision	cout << setprecision(2);
fixed	<iomanip>	Fixed-point notation	cout << fixed;*/