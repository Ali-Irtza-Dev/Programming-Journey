#include <iostream>
using namespace std;
int main()
{
    string productName = "book";
   float productPrice = 250.12f;
float productQuantity = 0; 
    bool isAvailable;
    cout << "Product Details:\n ";
    cout << "Product Name: " << productName << endl;
    cout << "Product Price: " << productPrice << endl;
    cout << "Product Quantity: " << productQuantity << endl;
    if (productQuantity > 0)
    {
        isAvailable = true;
        cout << "Product Availability: Available" << endl;
    }
    else
    {
        isAvailable = false;
        cout << "Product Availability: Not Available" << endl;
    }
}