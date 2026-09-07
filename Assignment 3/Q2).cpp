#include <iostream>
using namespace std;

class Number
{
    private:
        int a;
        int b;
    public:
        Number(int x, int y)
        {
            a = x;
            b = y;
        }

        friend void calculator(Number n);
    };
    void calculator(Number n){
        cout<<"sum :"<<n.a+ n.b <<endl;

    }
    int main()
    {
        Number n1(10, 20);
        calculator(n1);
        return 0;
    }