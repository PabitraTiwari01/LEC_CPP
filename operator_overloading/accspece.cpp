#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int privateData;

protected:
    int protectedData;

public:
    int publicData;

    void setPrivateData(int data) {
        privateData = data;
    }

    void setProtectedData(int data) {
        protectedData = data;
    }

    void setPublicData(int data) {
        publicData = data;
    }

    void displayData() {
        cout << "Private data: " << privateData << endl;
        cout << "Protected data: " << protectedData << endl;
        cout << "Public data: " << publicData << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void accessBaseData() {
        // Accessing the inherited members
        protectedData = 20;
        publicData = 30;

        // privateData is not accessible in the derived class
        // setPrivateData(10);  // This will give a compilation error

          // Displaying the inherited data
    }
};

int main() {
    Base b1;
    b1.setPrivateData(2);
    b1.setProtectedData(3);
    b1.setPublicData(4);
    b1.displayData();
   
    Derived derivedObj;

    derivedObj.setProtectedData(20);
    derivedObj.setPublicData(30);

    derivedObj.accessBaseData();

    return 0;
}