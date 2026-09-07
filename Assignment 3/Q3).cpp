#include <iostream>
using namespace std;

class Employee
{
private:
    double salary;

public:
    Employee(double s)
    {
        salary = s;
    }

    friend void display(Employee e1, Employee e2);
};
void display(Employee e1, Employee e2)
{
    if(e1.salary>e2.salary){
        cout<<"Employee 1 has greator salary than employee 2"<<endl;
    }
    else{
        cout<<"Employee 2 has greator salary than employee 1"<<endl;
    }

}

int main(){
    Employee e1(50000);
    Employee e2(60000);

    display(e1,e2);
    return 0;
}