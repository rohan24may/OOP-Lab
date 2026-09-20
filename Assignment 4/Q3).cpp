#include <iostream>
using namespace std;

class Academic
{
protected:
    int marks;

public:
    void acceptMarks()
    {
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }
};

class Sports
{
protected:
    int sportsScore;

public:
    void acceptSportsScore()
    {
        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }
};

class Result : public Academic, public Sports
{
public:
    void displayResult()
    {
        int total = marks + sportsScore;

        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Total Score: " << total << endl;
    }
};

int main()
{
    Result r;

    r.acceptMarks();
    r.acceptSportsScore();

    r.displayResult();

    return 0;
}