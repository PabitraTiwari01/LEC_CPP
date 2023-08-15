#include <iostream>
using namespace std;
class Distance {
private:
    int meters;

public:
    // Constructor that takes an int as a parameter
    Distance(int m = 0)  {
        meters=m;
    }

    // Getter method to retrieve the value of Distance in meters
    int getMeters()  {
        return meters;
    }
};

int main() {
    int distanceInMeters = 1000;
    
    // Conversion from int to Distance using the constructor
    Distance distanceObj = distanceInMeters;
    
    cout << "distanceInMeters: " << distanceInMeters << endl;     // Output: distanceInMeters: 1000
    cout << "distanceObj.getMeters(): " << distanceObj.getMeters() << endl; // Output: distanceObj.getMeters(): 1000
    
    return 0;
}
