#include <iostream>
using namespace std;
class Student
{public:
    int rollno;

    void getrollno()
    {
    cout << "Enter roll number for student: ";
    cin >> rollno;
    }
};

int main()
{
    Student s1;
    s1.getrollno();
    cout << "Roll number is: " << s1.rollno << endl;
    Student s2;
    s2.getrollno();
    cout << "Roll number is: " << s2.rollno << endl;
    Student s3;
    s3.getrollno();
    cout << "Roll number is: " << s3.rollno << endl;
    Student s4;
    s4.getrollno();
    cout << "Roll number is: " << s4.rollno << endl;
    Student s5;
    s5.getrollno();
    cout << "Roll number is: " << s5.rollno << endl;
    return 0;
}