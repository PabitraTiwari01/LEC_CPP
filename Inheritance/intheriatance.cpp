#include <iostream>
using namespace std;

class parent{
    public:
    virtual void display(){
        cout<<"This is parent class";
    }
};
class derived:public parent{
    public:
    void display(){
        cout<<"This is derived class";
    }

};
int main(){
    parent *bptr;
    derived c1;
    bptr=&c1; 
    bptr->display();
    return 0;

}
