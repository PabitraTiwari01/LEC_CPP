#include <iostream>
using namespace std;

//  creating Class 
class Circle {
  private:
    double radius;

  public:
    // Constructor
    Circle(){}
    Circle(double r) {
        radius = r;
    }

    // Member function
    double calculateArea() {
        return 3.14 * radius * radius;
    }
};

// Non-member function
void printCircleArea(Circle circle) {  // eg.: void AreA(int r){} jastai (Circle circle){} where circle is a parameter of Circle
    
    cout << "Area of the circle: " << circle.calculateArea() << endl;
}

int main() {
    //  object of the Circle class
    Circle myCircle(5.0);

    // Calling member function directly on the object
    cout << "Area of the circle: " << myCircle.calculateArea() << endl;

    //  non-member function call
    printCircleArea(myCircle);

    return 0;
}


