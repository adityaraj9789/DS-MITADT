#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of tokens: ";
    cin >> n;

    int tokens[100];
    int count = 0;
    int choice;

    while (true)
    {
        cout << "\n1. Issue Token";
        cout << "\n2. Display Tokens";
        cout << "\n3. Serve Customer";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (count < n)
            {
                tokens[count] = count + 1;
                cout << "Token issued: " << tokens[count] << endl;
                count++;
            }
            else
            {
                cout << "All tokens have been issued." << endl;
            }
        }
        else if (choice == 2)
        {
            cout << "Tokens: ";

            for (int i = 0; i < count; i++)
                cout << tokens[i] << " ";

            cout << endl;
        }
        else if (choice == 3)
        {
            if (count > 0)
            {
                cout << "Customer with Token "
                     << tokens[0] << " is served." << endl;

                for (int i = 0; i < count - 1; i++)
                    tokens[i] = tokens[i + 1];

                count--;
            }
            else
            {
                cout << "No customers." << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "Program ended.";
            break;
        }
        else
        {
            cout << "Invalid choice.";
        }
    }

    return 0;
}