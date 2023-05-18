#include<iostream>
using namespace std;
class Account{
    public:
    float salary = 50000;
};
class programmer: public Account{
    public:
    float bonus = 40000;
}; // derived class
int main() {
    programmer p1;
    Account a1;
    cout<<"salary:"<<p1.salary<<endl;
    cout<<"salary:"<<a1.salary<<endl;
    cout<<"bonus:"<<p1.bonus<<endl;
    return 0;
}