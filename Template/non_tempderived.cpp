#include <iostream>

using namespace std;

template <class T> // template base class
class Base
{
public:
    T data;

    Base(T value)
    {
        data = value;
    }

    void print()
    {
        cout << "Data:" << data << endl;
    }
};

class Derived : public Base<int> // non template derived class
{
public:
    Derived(int value) : Base<int>(value) {}
};

int main()
{
    Derived d(10);
    d.print();

    return 0;
}