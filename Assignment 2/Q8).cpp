#include <iostream>
using namespace std;

class Demo
{
public:

    Demo()
    {
        cout << "Constructor called" << endl;
    }

    ~Demo()
    {
        cout << "Destructor called" << endl;
    }
};

void createObject()
{
    Demo obj2;

    cout << "Inside function" << endl;
}

int main()
{
    Demo obj1;

    cout << "Inside main" << endl;

    createObject();

    cout << "Back to main" << endl;

    return 0;
}