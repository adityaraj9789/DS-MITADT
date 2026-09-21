#include <iostream>
using namespace std;
class student
{public:
    int rollno;
    void getrollno()
    {
        cout << "Enter roll number for student: ";
        cin >> rollno;
    }
    void searchrollno(student s[], int n, int r)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i].rollno == r)
            {
                cout << "Student with roll number " << r << " found at index " << i << endl;
                return;
            }
        }
        cout << "Student with roll number " << r << " not found." << endl;
    }
};
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].getrollno();
    }
    int r;
    cout << "Enter roll number to search: ";
    cin >> r;
    s[0].searchrollno(s, n, r);
    return 0;
}