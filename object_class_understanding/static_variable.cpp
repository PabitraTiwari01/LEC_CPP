#include <iostream>

void printMessage() {
    static int callCount = 0; // static variable
    
    callCount++;
    
    std::cout << "Hello, World! This function has been called " << callCount << " times." << std::endl;
}

int main() {
    printMessage();
    printMessage();
    printMessage();
    
    return 0;
}
