#include <iostream>

template <typename T>
class Base {
protected:
    T value;

public:
    Base(T val) : value(val) {}

    void display() {
        std::cout << "Base Value: " << value << std::endl;
    }
};

template <typename T>
class Derived : public Base<T> {
private:
    T extraValue;

public:
    Derived(T baseVal, T extraVal) : Base<T>(baseVal), extraValue(extraVal) {}

    void display() {
        Base<T>::display();
        std::cout << "Derived Extra Value: " << extraValue << std::endl;
    }
};

int main() {
    Derived<int> derivedObj(5, 10);
    derivedObj.display();

    return 0;
}
