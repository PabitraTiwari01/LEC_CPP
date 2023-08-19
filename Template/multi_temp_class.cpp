#include <iostream>

template <typename T, typename U>
class Pair {
private:
    T first;
    U second;

public:
    Pair(T f, U s) : first(f), second(s) {}

    void display() {
        std::cout << "Pair: " << first << ", " << second << std::endl;
    }
};

int main() {
    Pair<int, double> pair1(5, 3.14);
    pair1.display();

    Pair<std::string, char> pair2("Hello", 'A');
    pair2.display();

    return 0;
}
