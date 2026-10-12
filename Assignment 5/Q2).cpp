#include <iostream>
using namespace std;

class A{
    int a;

    public:

    A(int x){
        a=x;
    }

    friend class B;
};

class B{
    public:

    void display(A obj){
        cout<<" "<<obj.a;

    }
};

int main(){
    A obj(9);
    B b;
    
    b. display(obj);
}