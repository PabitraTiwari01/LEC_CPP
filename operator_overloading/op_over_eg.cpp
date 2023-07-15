#include<iostream>
using namespace std;
class N{
    private:
    int a,b,c;
    public:
    N(int x,int y,int z){
        a=x;
        b=y;
        c=z;

    }
    void operator -(){
        a=-a;
        b=-b;
        c=-c;
    }
    void display(){
        cout<<"The required number is:"<<a<<b<<c<<endl;

    }

};
int main(){
    N obj(2,-3,4);
    -obj;
    obj.display();
    obj.display();
   
    

} 