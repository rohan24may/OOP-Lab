#include <iostream>
using namespace std;

class Student
{
private:
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;

    void updateDetails()
    {
        cout << "\nEnter Updated Name: ";
        cin >> Name;

        cout << "Enter Updated Degree: ";
        cin >> Degree;
    }

    void updateCGPA()
    {
        cout << "\nEnter Updated CGPA: ";
        cin >> CurrentCGPA;
    }

    void updateHostel()
    {
        cout << "\nEnter Updated Hostel: ";
        cin >> Hostel;
    }

public:
    void addDetails()
    {
        cout << "Enter Name: ";
        cin >> Name;

        cout << "Enter Roll No: ";
        cin >> RollNo;

        cout << "Enter Degree: ";
        cin >> Degree;

        cout << "Enter Hostel: ";
        cin >> Hostel;

        cout << "Enter Current CGPA: ";
        cin >> CurrentCGPA;
    }

    void displayDetails()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << RollNo << endl;
        cout << "Degree: " << Degree << endl;
        cout << "Hostel: " << Hostel << endl;
        cout << "Current CGPA: " << CurrentCGPA << endl;
    }

    void updateStudent()
    {
        updateDetails();
        updateCGPA();
        updateHostel();
    }
};

int main()
{
    Student s;

    s.addDetails();
    s.displayDetails();

    s.updateStudent();

    cout << "\nUpdated Details:";
    s.displayDetails();

    return 0;
}
