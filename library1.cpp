#include<iostream>
#include<string>
using namespace  std;
int main()
{
 int i1,i2,i3;
 string titl1,titl2,titl3;
 
 cout<<"\n Enter the id no of book";
 cin>>i1;
 
cin.ignore();
cout<<"Enter the title   ";
getline(cin,titl1);
 

cout<<"\n Enter the id no of book";
cin>>i2;

cin.ignore();
cout<<"\n Enter the title  ";
getline(cin,titl2);

cout<<"\n Enter the id of book   ";
cin>>i3;

cin.ignore();
cout<<"\n Enter the title   ";
getline(cin,titl3);

cout<<"\n BOOK ID "<<i1;
cout<<"\n TITLE of BOOK"<<titl1;


cout<<"\n BOOK ID "<<i1;
cout<<"\n TITLE of BOOK"<<titl1;


cout<<"\n Enter the id of book   ";
cin>>i3;

cin.ignore();
cout<<"\n Enter the title   ";
getline(cin,titl3);


cout<<"\n BOOK ID "<<i1;
cout<<"\n TITLE of BOOK"<<titl1;


cout<<"\n BOOK ID  "<<i2;
cout<<"\n TITLE of BOOK"<<titl2;

cout<<"\n BOOK ID  "<<i3;
cout<<"\n TITLE of BOOK"<<titl3;
return 0;
}