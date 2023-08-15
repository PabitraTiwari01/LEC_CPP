#include<iostream>
using namespace std;
class A{
    int x;
    public:
     void getnum(int p){
        this->x=p;
        
        }
    void shownum(){
        cout<<"The num is   "<<x;
    }
};
int main(){
    A obj1,obj2;
    obj1.getnum(4);
    obj1.shownum();
    obj2.getnum(3);
    obj2.shownum();

}