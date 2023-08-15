#include <iostream>
using namespace std;
class Distance {
private:
    int meters;

public:
    Distance(int m = 0) {
        meters=m;
    }

    // Conversion operator to convert Distance to int
    operator int(){
        return meters;
    }
};

int main() {
    Distance distanceObj(1000);
    
    // Implicit conversion using the cast operator
    int distanceInMeters = distanceObj; // Calls the conversion operator to convert Distance to int
    
    cout << "distanceObj: " << distanceObj << endl;                   // Output: distanceObj: 1000
    cout << "distanceInMeters: " << distanceInMeters << endl; // Output: distanceInMeters: 1000
    
    return 0;
}
