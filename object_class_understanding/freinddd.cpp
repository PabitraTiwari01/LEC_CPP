#include <iostream>

using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass(int value) {
        data=value;
    }

    // Declare the friend function
    friend void displayData(const MyClass& obj);
};

// Define the friend function
void displayData(const MyClass& obj) {
    cout << "Data in MyClass: " << obj.data << endl;
}

int main() {
    MyClass obj1(42);

    // Call the friend function to display the private data
    displayData(obj1);

    return 0;
}
