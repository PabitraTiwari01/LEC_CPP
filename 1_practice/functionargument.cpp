#include<iostream>
using namespace std;
class Student{
    public:
    double marks;
    Student(double m){
        marks=m;
        
    }
};
void calculateaverage(Student s1, Student s2){
    double average =(s1.marks+ s2.marks)/2;
    cout<<"the average marks of the two students is"<<average<<endl;
}
int main(){
    Student student1(100.1), student2(200.5);
    calculateaverage(student1,student2);
    return 0;
}
