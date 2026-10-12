#include <iostream>
using namespace std;

class Maximum{
    public:
    void findMax(int a,int b){
        cout<<"Maximum of two integers: "<<(a>b?a:b)<<endl;
    }
    void findMax(int a,int b,int c){
        cout<<"Maximum of three integers: "<<(a>b?(a>c?a:c):(b>c?b:c))<<endl;
    }
    void findMax(double a,double b){
        cout<<"Maximum of two doubles: "<<(a>b?a:b)<<endl;
    }
};
int main()
{
    Maximum m;

    m.findMax(5,10);  
    m.findMax(5,10,15);  
    m.findMax(5.5,10.5);  

    return 0;
}