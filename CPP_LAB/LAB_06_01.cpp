#include <iostream>

using namespace std;

class Matrix {
private:
    int data[2][2];

public:
    Matrix() {
        // Initialize matrix with 0 values
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                data[i][j] = 0;
            }
        }
    }

    Matrix(int a, int b, int c, int d) {
        data[0][0] = a;
        data[0][1] = b;
        data[1][0] = c;
        data[1][1] = d;
    }

    // Overload the binary operator - to perform matrix subtraction
    Matrix operator-(const Matrix& other) const {
        Matrix result;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    void display() const {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Initialize matrix M1 with predefined values
    Matrix M1(1, 2, 3, 4);

    // Initialize matrix M2 with user values
    int a, b, c, d;
    cout << "Enter the values for matrix M2 (4 integers): ";
    cin >> a >> b >> c >> d;
    Matrix M2(a, b, c, d);

    // Matrix M3 with 0 values to store the result
    Matrix M3;

    // Perform the operation M3 = M1 - M2 using the overloaded operator
    M3 = M1 - M2;

    cout << "Matrix M1:" << endl;
    M1.display();

    cout << "Matrix M2:" << endl;
    M2.display();

    cout << "Result (Matrix M3 = M1 - M2):" << endl;
    M3.display();

    return 0;
}
