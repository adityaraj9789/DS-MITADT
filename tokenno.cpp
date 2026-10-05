#include <iostream>
using namespace std;

int main() {
    int queue[5];
    int front = 0, rear = 0;
    int token;

    cout << "Enter 5 customer token numbers:\n";

    for (int i = 0; i < 5; i++) {
        cin >> token;
        queue[rear] = token;
        rear++;
    }

    cout << "\nCustomers are being served in order:\n";

    while (front < rear) {
        cout << "Serving customer with token no. "
             << queue[front] << endl;
        front++;
    }

    return 0;
}