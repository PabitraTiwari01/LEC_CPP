#include <iostream>
using namespace std;

class Time {
private:
    int hr;
    int min;
    int sec;

public:
    // Default constructor
    Time() {
        hr=12;
        min=0;
        sec=0;
    }

    // Parameterized constructor
    Time(int seconds) {
        hr = seconds / 3600;
        min = (seconds % 3600) / 60; //%calculates the remainder of seconds/3600
        sec = (seconds % 3600) % 60;
    }

    // Copy constructor
    Time(const Time& other) {
         hr=other.hr;
         min=other.min;
         sec=other.sec; 
    }

    void display() const {
        cout << "Time: " << hr << " hr " << min << " min " << sec << " sec" << endl;
    }
};

int main() {
    
    Time t1; 
    t1.display();

    int seconds;
    cout<<"Enter the user defined seconds";
    cin>>seconds;
    Time t2(seconds); 
    t2.display(); 
    Time t3=t1; 
    t3.display(); 

    return 0;
}
