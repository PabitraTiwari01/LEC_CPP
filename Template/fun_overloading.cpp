//overloading two function template

#include <iostream>

using namespace std;

// A function template to print the sum of two numbers
template <typename T>
void sum(T x, T y) {
  cout << x + y << endl;
}

// A function template to print the product of two numbers
template <typename T>
void product(T a, T b) {
  cout << a * b << endl;
}

int main() {
  // Call the sum function with two integers
  sum(10, 20);

  // Call the product function with two floats
  product(3.14, 2.71);

  return 0;
}
