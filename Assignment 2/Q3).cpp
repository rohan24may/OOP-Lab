#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;
    float salary;

public:
    // Parameterized constructor
    Employee(string n, int i, float s)
    {
        name = n;
        id = i;
        salary = s;
    }

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1("Rohan", 101, 50000);

    e1.display();

    return 0;
}