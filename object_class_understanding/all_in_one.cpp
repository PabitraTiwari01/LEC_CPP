#include <iostream>
using namespace std;


// Abstract base class
class Operation {
public:
    virtual int performOperation(int a, int b)=0;
 
};

// Derived class Addition
class Addition : public Operation {
public:
    // Overloaded performOperation function
    int performOperation(int a, int b) {
        return a + b;
    }
};



int main() {
    // Create an object of Addition class
    Addition addOperation;

    // Perform addition using polymorphism
    int result = addOperation.performOperation(5, -3);

    // Display the result
    cout << "The result of addition is: " << result << endl;

    return 0;
}
