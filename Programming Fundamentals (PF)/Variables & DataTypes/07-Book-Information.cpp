#include<iostream>
using namespace std;
int main()
{
    string bookTitle;
    string authorName;
    int publicationYear;
    float bookPrice;
    int numberOfPages;

    cout<<"Enter Book Tile"<<endl;
    cin>>bookTitle;
    cout<<"Enter Author Name"<<endl;
    cin>>authorName;
    cout<<"Enter Publication Year"<<endl;
    cin>>publicationYear;
    cout<<"Enter Book Price"<<endl;
    cin>>bookPrice;
    cout<<"Enter Number of Pages"<<endl;     
    cin>>numberOfPages;
    cout<<"************** BOOK INFORMATION *************"<<endl;
    cout<<"* Book Title: "<<bookTitle<<"                             *"<<endl;
    cout<<"* Publication Year: "<<publicationYear<<"                       *"<<endl;
    cout<<"* Book Price: "<<bookPrice<<"                             *"<<endl;
    cout<<"* Number of Pages: "<<numberOfPages<<"                        *"<<endl;
    cout<<"*********************************************"<<endl;
}