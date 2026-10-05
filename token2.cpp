#include <iostream>
using namespace std;

int main() {
    int stack[5];
    int top = -1;
    int token;

    cout << "Enter 5 customer token numbers:\n";

    for (int i = 0; i < 5; i++) {
        cin >> token;
        top++;
        stack[top] = token;
    }

    cout << "\nService History (Most Recent First):\n";

    while (top >= 0) {
        cout << "Customer Token No. " << stack[top] << endl;
        top--;
    }

    return 0;
}
