#include <iostream>
using namespace std;

int main()
{
    int i;

    // 1. For Loop
    cout << "For Loop: ";
    for(i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }

    // 2. While Loop
    cout << "\nWhile Loop: ";
    i = 1;
    while(i <= 5)
    {
        cout << i << " ";
        i++;
    }

    // 3. Do-While Loop
    cout << "\nDo-While Loop: ";
    i = 1;
    do
    {
        cout << i << " ";
        i++;
    }
    while(i <= 5);

    return 0;
}
