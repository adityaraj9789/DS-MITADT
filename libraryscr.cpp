#include<iostream>
using namespace std;
int main()
{
    int bookid[5];
    int searchID;

    cout<<"Enter 5 book IDS: \n";
    for(int i=0;i<5;i++)
    {
        cin>> bookid[i];

    }
    cout<<"\n Enter the book id search:  ";
    cin>>searchID;

    for(int i=0;i<5;i++)
    {
        if (bookid[i]==searchID)
        {
            cout<<"Book Found: ";
            
        }
        else 
        {
            cout<<"Book NOt found ";
        }
        return 0;
        }
    }