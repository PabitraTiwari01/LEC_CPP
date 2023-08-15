#include <iostream>
using namespace std;

class Design1 {
public:
    int code;
    int qty;
    int price;

    Design1(int inputCode, int inputQty, int inputPrice) {
        code = inputCode;
        qty = inputQty;
        price = inputPrice;
    }
};

class Design2 {
public:
    int code;
    int value;

    Design2(Design1 design1_obj) {
        code = design1_obj.code;
        value = design1_obj.qty * design1_obj.price;
    }
};

int main() {
    // Create an object of Design1
    Design1 D1(677, 30, 2);

    // Create an object of Design2 using the Design1 object
    Design2 D2(D1);

    cout << "Design1 - Code: " << D1.code << ", Qty: " << D1.qty << ", Price: " << D1.price << endl;
    cout << "Design2 - Code: " << D2.code << ", Value: " << D2.value << endl;

    return 0;
}

