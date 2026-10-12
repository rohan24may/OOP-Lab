#include <iostream>
using namespace std;

class Student
{
public:
    void display(int x)
    {
        cout << x << endl;
    }

    void display(double x)
    {
        cout << x << endl;
    }

    void display(int x, int y)
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Student s;

    s.display(5);
    s.display(5.5);
    s.display(5, 10);

    return 0;
}