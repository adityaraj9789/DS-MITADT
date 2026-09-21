#include <iostream>
using namespace std;
class Student {
    public:
        int rollno;
        int marks;
        string name;
    
        void getdata() {
            cout << "Enter roll number for student: ";
            cin >> rollno;
            cout << "Enter marks for student: ";
            cin >> marks;
            cout << "Enter name for student: ";
            cin >> name;
        }
        void displaydata() {
            cout << "Roll number: " << rollno << ", Marks: " << marks << ", Name: " << name << endl;
        }
        void sortmarks(Student s[], int n) {
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (s[j].marks > s[j + 1].marks) {
                        Student temp = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = temp;
                    }
                }
            }
        }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++) {
        s[i].getdata();
    }
    s[0].sortmarks(s, n);
    cout << "Students sorted by marks:" << endl;
    for (int i = 0; i < n; i++) {
        s[i].displaydata();
    }
    return 0;
}
        