#include<iostream>
using namespace std;

class Calculator
{
    public:
    void sum(int x,int y){
        cout<<"Sum of two integers: "<<x+y<<endl;
    }
    void sum(int x,int y,int z){
        cout<<"Sum of three integers: "<<x+y+z<<endl;
    }
    void sum(double x,double y){
        cout<<"Sum of two doubles: "<<x+y<<endl;
    }
};

int main()
{
    Calculator c;

    c.sum(5,10);  
    c.sum(5,10,15);  
    c.sum(5.5,10.5);  

    return 0;
}