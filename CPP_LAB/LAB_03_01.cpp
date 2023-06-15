#include <iostream>


using namespace std;

const double PI = 3.14159;


int calculateArea(int length = 10) {
    return 6 * length*length;
}


double calculateArea(double radius) {
    return PI * radius*radius;
}


double calculateArea(double length, double breadth) {
    return length * breadth;
}

int main() {
    int choice;
    cout << "Select a shape to calculate its area:\n";
    cout << "1. Cube\n";
    cout << "2. Circle\n";
    cout << "3. Rectangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the length of the cube: ";
            int cubeLength;
            cin >> cubeLength;
            cout << "Area of the cube: " << calculateArea(cubeLength) << endl;
            break;
        case 2:
            cout << "Enter the radius of the circle: ";
            double circleRadius;
            cin >> circleRadius;
            cout << "Area of the circle: " << calculateArea(circleRadius) << endl;
            break;
        case 3:
            cout << "Enter the length and breadth of the rectangle: ";
            double rectangleLength, rectangleBreadth;
            cin >> rectangleLength >> rectangleBreadth;
            cout << "Area of the rectangle: " << calculateArea(rectangleLength, rectangleBreadth) << endl;
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}

