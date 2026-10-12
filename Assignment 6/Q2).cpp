#include <iostream>
using namespace std;

class Area
{
public:
    void calculate(int x, int y)
    {
        cout << "Area of rectangle: " << x * y << endl;
    }

    void calculate(int x)
    {
        cout << "Area of square: " << x * x << endl;
    }

    void calculate(double r)
    {
        cout << "Area of circle: " << 3.14 * r * r << endl;
    }
};

int main()
{
    Area a;

    a.calculate(5, 10);  
    a.calculate(5);      
    a.calculate(5.5);   

    return 0;
}