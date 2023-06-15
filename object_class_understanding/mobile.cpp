#include<iostream>
using namespace std;
class Mobile{
    int m=10;
    public:
    void display(){
        cout<<"\nThe value of m is:"<<m;
        cout<<" \nThe value of what is:"<<this->m;
        cout<<" \nThe address of current object is"<<this;

    }
};

int main(){
    Mobile m1,m2;
    m1.display();
    m2.display();
}