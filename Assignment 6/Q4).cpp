#include <iostream>
using namespace std;

class Print
{
public:
    void result(int x)
    {
        cout << "Marks: " << x << endl;
    }

    void result(int x, int y)
    {
        cout << "Average: " << (x + y) / 2<< endl;
    }

    void result(int x, int y, int z)
    {
        cout << "Average: " << (x + y + z) / 3 << endl;
    }
};

int main()
{
    Print p;

    p.result(85);
    p.result(85, 90);
    p.result(85, 90, 95);

    return 0;
}