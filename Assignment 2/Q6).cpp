#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;

public:

    // Default constructor
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    // Parameterized constructor
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    // Display function
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1;
    Complex c2(5, 3);

    cout << "Complex Number 1: ";
    c1.display();

    cout << "Complex Number 2: ";
    c2.display();

    return 0;
}