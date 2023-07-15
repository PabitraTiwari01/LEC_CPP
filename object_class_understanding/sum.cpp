#include <iostream>
using namespace std;
// Function with two integer parameters
void add(int a, int b) {
    int sum = a + b;
    cout << "Sum: " << sum << endl;
}

// Function with two double parameters
void add(double a, double b) {
    double sum = a + b;
    cout << "Sum: " << sum << endl;
}

int main() {
    add(2,4);         // Calls the first version of add()
    add(4.5,3.4);     // Calls the second version of add()

    return 0;
}
