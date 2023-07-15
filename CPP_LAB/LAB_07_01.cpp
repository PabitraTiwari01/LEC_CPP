#include <iostream>
using namespace std;

class Student {
protected:
    string roll_no;
    string name;

public:
    void input_details() {
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Name: ";
        cin>> name;
        
     
    }

    void display_details() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

class Test {
protected:
    int marks[5];

public:
    void input_marks() {
        cout << "Enter marks for each subject:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 ;
            cin >> marks[i];
        }
    }

    int calculate_total() {
        int total_marks = 0;
        for (int i = 0; i < 5; i++) {
            total_marks += marks[i];
        }
        return total_marks;
    }
};

class Result : public Student, public Test { //Multi-level inheritance
public:
    void display_result() {
        input_details();
        input_marks();
        int total_marks = calculate_total();
        display_details();
        cout << "Total Marks: " << total_marks << endl;
        if (total_marks>=200){
            cout<<"result is : pass";
        }
        else{
             cout<<"result is : failed";
        }
    
    }
};

int main() {
    Result student_result;
    student_result.display_result();
    return 0;
} 