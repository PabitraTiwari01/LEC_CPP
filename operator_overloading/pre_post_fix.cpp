#include <iostream>

class Counter {
private:
    int count;

public:
    Counter(int initialValue) : count(initialValue) {}

    // Overloading prefix increment operator '++'
    Counter& operator++() {
        count++;
        return *this;
    }

    // Overloading prefix decrement operator '--'
    Counter& operator--() {
        count--;
        return *this;
    }

    int getCount() const {
        return count;
    }
};

int main() {
    Counter c(5);

    ++c;  // Prefix increment
    std::cout << "Count after prefix increment: " << c.getCount() << std::endl;  // Output: 6

    --c;  // Prefix decrement
    std::cout << "Count after prefix decrement: " << c.getCount() << std::endl;  // Output: 5

    return 0;
}

