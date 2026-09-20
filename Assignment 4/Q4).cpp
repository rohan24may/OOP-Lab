#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string brand;
    string model;

public:
    void acceptVehicle()
    {
        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Model: ";
        cin >> model;
    }
};

class Car : public Vehicle
{
    int doors;

public:
    void acceptCar()
    {
        acceptVehicle();

        cout << "Enter Number of Doors: ";
        cin >> doors;
    }

    void display()
    {
        cout << "\nCar Details" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Doors: " << doors << endl;
    }
};

class Bike : public Vehicle
{
    int engineCapacity;

public:
    void acceptBike()
    {
        acceptVehicle();

        cout << "Enter Engine Capacity: ";
        cin >> engineCapacity;
    }

    void display()
    {
        cout << "\nBike Details" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main()
{
    Car c;
    Bike b;

    cout << "Enter Car Details:" << endl;
    c.acceptCar();
    c.display();

    cout << "\nEnter Bike Details:" << endl;
    b.acceptBike();
    b.display();

    return 0;
}