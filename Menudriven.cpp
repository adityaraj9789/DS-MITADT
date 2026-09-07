#include <iostream>
using namespace std;

int main()
{
    int book[10];
    int n = 0;
    int choice;
    int searchid;

    do
    {
        cout << "\n==============Smart Library menu===============\n";
        cout << "1. Add book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (n < 10)
            {
                cout << "\nEnter bookid: ";
                cin >> book[n];
                n++;
                cout << "Book Added Successfully!\n";
            }
            else
            {
                cout << "\nLibrary is full! Cannot add more books.\n";
            }
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "\nNo books in the library yet.\n";
            }
            else
            {
                cout << "\nBooks in Library:\n";
                // FIX: Initialized i = 0
                for (int i = 0; i < n; i++)
                {
                    cout << book[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Enter Book ID to search: ";
            cin >> searchid;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (book[i] == searchid)
                {
                    found = true;
                    break; // Stop loop early when found
                }
            }
            if (found)
            {
                cout << "\nBook Found!\n";
            }
            else
            {
                cout << "\nBook Not Found!\n";
            }
        }
        else if (choice == 4)
        {
            cout << "\nThank you!\n";
        }
        else
        {
            cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 4); // FIX: Proper placement of do-while termination

    return 0;
}