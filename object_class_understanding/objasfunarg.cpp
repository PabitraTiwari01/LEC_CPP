#include<iostream>
using namespace std;
class student{
    public:
    double marks;
    student(double m)
    {
        
        marks=m;
    }
};
void calculateAverage(student s1, student s2)
{
    double average;
    average=(s1.marks+s2.marks)/2;
    cout<<"The average is:"<<average;
    

}
int main(){
    student c1(345),c2(455);
    calculateAverage(c1,c2);

}

