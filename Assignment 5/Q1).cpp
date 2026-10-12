#include <iostream>
using namespace std;

class A;   

class B
{
    int a;

public:

    B(int x)
    {
        a = x;
    }

    friend int add(A, B);
};

class A
{
    int b;

public:

    A(int y)
    {
        b = y;
    }

    friend int add(A, B);
};

int add(A obj1, B obj2)
{
    return obj1.b + obj2.a;
}

int main()
{
    A obj1(10);
    B obj2(80);

    cout << "Sum = " << add(obj1, obj2);

    return 0;
}