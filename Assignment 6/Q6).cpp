#include <iostream>
using namespace std;

class Bill
{
public:
    double calculateBill(int quantity, double price)
    {
        cout << "One item bill: ";
        return quantity * price;
    }

    double calculateBill(int q1, double p1, int q2, double p2)
    {
        cout << "Two item bill: ";
        return (q1 * p1) + (q2 * p2);
    }

    double calculateBill(double amount, int discount)
    {
        cout << "Bill after discount: ";
        return amount - (amount * discount / 100.0);
    }
};

int main()
{
    Bill b;

    cout << b.calculateBill(2, 100.0) << endl;
    cout << b.calculateBill(2, 100.0, 3, 50.0) << endl;
    cout << b.calculateBill(500.0, 10) << endl;

    return 0;
}