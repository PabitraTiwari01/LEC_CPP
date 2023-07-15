#include <iostream>
using namespace std;

// Base class
class Operation {
protected:
    int operand1;
    int operand2;

public:
    void setOperands(int op1, int op2) {
        operand1 = op1;
        operand2 = op2;
    }
};

// Derived class (Single Inheritance)
class Addition : public Operation {
public:
    int getSum() {
        return operand1 + operand2;
    }
};

// Derived class (Multiple Inheritance)
class Subtraction : public Operation{
    int getDifference() {
        return operand1 - operand2;
    }
};

// Derived class (Multilevel Inheritance)
class Multiplication : public Addition {
private:
    int factor;

public:
    void setFactor(int f) {
        factor = f;
    }

    int getProduct() {
        return getSum() * factor;
    }
};

int main() {
    // Single Inheritance
    Addition addition;
    addition.setOperands(5, 3);
    cout << "Sum: " << addition.getSum() << endl;

    // Multiple Inheritance
    Subtraction subtraction;
    subtraction.setOperands(7, 4);
    cout << "Difference: " << subtraction.getDifference() << endl;

    // Multilevel Inheritance
    Multiplication multiplication;
    multiplication.setOperands(2, 3);
    multiplication.setFactor(4);
    cout << "Product: " << multiplication.getProduct() << endl;

    return 0;
}
