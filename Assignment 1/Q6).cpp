#include <iostream>
using namespace std;

class Student
{
private:
    void privateFunction()
    {
        cout << "Private member function called." << endl;
    }

public:
    void publicFunction()
    {
        cout << "Public member function called." << endl;

        // Calling private function inside public function
        privateFunction();
    }
};

int main()
{
    Student s;

    // Calling public function
    s.publicFunction();

    return 0;
}
