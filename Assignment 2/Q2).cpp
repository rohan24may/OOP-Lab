#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    // Parameterized constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void displayArea()
    {
        int area = length * breadth;

        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area << endl;
    }
};

int main()
{
    Rectangle r1(10, 5);

    r1.displayArea();

    return 0;
}