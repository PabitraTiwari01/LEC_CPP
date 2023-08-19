#include <iostream>
using namespace std;
template <class T>
class Container {
private:
    T item;

public:
    Container(T value)  {
        item=value;
    }

    T getValue()  {
        return item;
    }
};

int main() {
    Container<int> intContainer(42);
    Container<string> strContainer("Hello");

    cout << "Int value: " << intContainer.getValue() << "\n";
    cout << "String value: " << strContainer.getValue() << "\n";

    return 0;
}
