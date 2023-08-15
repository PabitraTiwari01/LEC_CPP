#include <iostream>

class Converter {
public:
    // Conversion functions
    double intToDouble(int value) {
        return static_cast<double>(value);
    }

    int doubleToInt(double value) {
        return static_cast<int>(value);
    }
};

int main() {
    using namespace std;

    Converter converter;

    int intValue = 42;
    double doubleValue = 3.14;

    // Convert int to double
    double convertedDouble = converter.intToDouble(intValue);
    cout << "Converted int to double: " << convertedDouble << endl;

    // Convert double to int
    int convertedInt = converter.doubleToInt(doubleValue);
    cout << "Converted double to int: " << convertedInt << endl;

    return 0;
}
