#include<iostream>
#include<iomanip>
using namespace std;
int main() {
   cout<<left;
   /* width = minimum number of characters to use.
*/
cout<<setw(18) <<"Name"<<setw(10) <<"Registration"<<endl;
cout<<setw(18) <<"--------"<<setw(10) << "--------"<<endl;
cout<<setw(18) <<"Haris"<<setw(10) << "24-NTU-CS-1001"<<endl;
cout<<setw(18) <<"Sana"<<setw(10) << "24-NTU-CS-1002"<<endl;
cout<<setw(18) <<"Muhammad Ali"<<setw(10) << "24-NTU-CS-1003"<<endl;
return 0;
// End
}