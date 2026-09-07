#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollNo;
    float cgpa;

public:

    Student()
    {
        name = "Unknown";
        rollNo = 0;
        cgpa = 0.0;
    }


    Student(string n, int r)
    {
        name = n;
        rollNo = r;
        cgpa = 0.0;
    }

    Student(string n, int r, float c)
    {
        name = n;
        rollNo = r;
        cgpa = c;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << endl;
    }
};

int main()
{
    Student s1;
    Student s2("Rohan", 101);
    Student s3("Rahul", 102, 8.5);

    cout << "Student 1:" << endl;
    s1.display();

    cout << "Student 2:" << endl;
    s2.display();

    cout << "Student 3:" << endl;
    s3.display();

    return 0;
}