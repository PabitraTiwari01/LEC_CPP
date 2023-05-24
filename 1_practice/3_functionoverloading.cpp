#include <iostream>
using namespace std;
 
 void mul(int a, int b)
{
  cout<<"multiplication is" << (a * b);
}
 
void mul(double a, double b)
{
    cout<< "multiplication = " << (a * b);
}
 
int main()
{
    mul(45,90);
    mul(8.9, 4.5);
 
    return 0;
}