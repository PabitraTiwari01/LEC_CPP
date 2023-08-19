#include <iostream>

template <typename T, typename U>
void printPair(T first, U second) {
    std::cout << "Pair1: " << first << std::endl;
    std::cout <<"pair2:" <<second << std::endl;
}

int main() {
    printPair(5, "Hello");
    printPair(3.14, "bye");

    return 0;
}
