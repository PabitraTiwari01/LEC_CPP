#include <iostream>

using namespace std;

class MyClass {
private:
    int data;

public:
    // Default Constructor
    MyClass() {
        cout << "Default Constructor called" << endl;
        data = 0;
    }

    // Parameterized Constructor
    MyClass(int value) {
        cout << "Parameterized Constructor called" << endl;
        data = value;
    }

    // Copy Constructor
    MyClass( MyClass& other) {
        cout << "Copy Constructor called" << endl;
        data = other.data;
    }

    int getData() {
        return data;
    }
};

int main() {
    // Default Constructor
    MyClass obj1;
    cout << "Data in obj1: " << obj1.getData() << endl;

    // Parameterized Constructor
    MyClass obj2(42);
    cout << "Data in obj2: " << obj2.getData() << endl;

    // Copy Constructor
    MyClass obj3 = obj2;
    cout << "Data in obj3: " << obj3.getData() << endl;

    return 0;
}
