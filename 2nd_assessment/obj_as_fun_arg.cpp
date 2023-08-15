#include <iostream>
using namespace std;

class student
{

public:
    double marks;
    student(double m) // constructor
    {

        marks = m;
    }
};
void calculateaverage(student s1, student s2)
{
    double average;
    average = (s1.marks + s2.marks) / 2;
    cout << "The average is:" << average << endl;
}
int main()
{
    student b1(200), b2(200);
    calculateaverage(b1, b2);
}