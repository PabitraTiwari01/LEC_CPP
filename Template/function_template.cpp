#include <iostream>
using namespace std;
template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int sum_int = add(5, 10);         // Calls add<int>
    double sum_double = add(3.14, 2.7); // Calls add<double>

    cout << "Sum of integers: " << sum_int << endl;
    cout << "Sum of doubles: " << sum_double << endl;

    return 0;
}
