#include <iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"This is constructor of base class"<<endl;
    }
    ~ base(){
        cout<<"This is distructor of base class"<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"This is constructor of derived class"<<endl;
    }
    ~derived(){
        cout<<"This is distructor of derived class"<<endl;
    }
};
int main(){
    base b;
    derived d;
    return 0;
}