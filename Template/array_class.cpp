#include <iostream>

using namespace std;

template <typename T>
class ArraySum {
private:
    T values[2];

public:
    ArraySum(T a, T b) {
        values[0] = a;
        values[1] = b;
    }

    T sum() {
        T result = values[0];
        for (int i = 1; i < 2; ++i) {
            result += values[i];
        }
        return result;
    }
};

int main() {
    ArraySum<int> intArraySum(5, 10);
    cout << "Sum of integers: " << intArraySum.sum() << endl;

    ArraySum<double> doubleArraySum(3.14, 2.7);
    cout << "Sum of doubles: " << doubleArraySum.sum() << endl;

    return 0;
}
