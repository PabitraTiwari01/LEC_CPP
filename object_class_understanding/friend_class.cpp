#include <iostream>
using namespace std;

class FriendClass; // Forward declaration of the friend class

class MyClass {
private:
    int privateData;

public:
    MyClass() : privateData(0) {}

    friend class FriendClass;
};

class FriendClass {
public:
    void modifyPrivateData(MyClass& obj, int newData) {
        obj.privateData = newData;
    }

    void displayPrivateData(const MyClass& obj) {
        cout << "Private Data: " << obj.privateData << endl;
    }
};

int main() {
    MyClass obj;
    FriendClass friendObj;

    friendObj.modifyPrivateData(obj, 42);
    friendObj.displayPrivateData(obj);

    return 0;
}
