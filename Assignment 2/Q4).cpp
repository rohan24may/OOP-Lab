#include <iostream>
using namespace std;

class Box
{
    int length;
    int width;
    int height;

public:

    // Default constructor
    Box()
    {
        length = 1;
        width = 1;
        height = 1;
    }

    // Parameterized constructor
    Box(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }

    // Calculate and display volume
    void displayVolume()
    {
        int volume = length * width * height;

        cout << "Volume: " << volume << endl;
    }
};

int main()
{
    Box b1;
    Box b2(10, 5, 2);

    cout << "Box 1: ";
    b1.displayVolume();

    cout << "Box 2: ";
    b2.displayVolume();

    return 0;
}