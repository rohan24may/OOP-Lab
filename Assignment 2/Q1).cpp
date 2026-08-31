#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollNo;

public:
    
    Student()
    {
        name = "Rohan";
        rollNo = 101;
    }

    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1;

    s1.display();

    return 0;
}