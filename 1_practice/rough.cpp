#include <iostream>
using namespace std;
class base{
    public:
    int a=60;
    void fun(){
    if (a>40)
    {
    cout<<"pass";
    }
    else {
    cout<<"fail";
    }
    }
};

int main(){
    base b;
    b.fun();
    return 0;
}