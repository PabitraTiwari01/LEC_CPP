#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b,int c) {
        return a-b-c;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math ma;

    int sumInt = ma.add(5, 3, 4);
    double sumDouble = ma.add(3.5, 2.7);

    cout << "Sum of integers: " << sumInt << endl;
    cout << "Sum of doubles: " << sumDouble << endl;

    return 0;
}
