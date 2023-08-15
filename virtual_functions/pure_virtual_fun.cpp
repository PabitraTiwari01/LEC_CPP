#include <iostream>
using namespace std;
class base{
    public:
    virtual void method()=0;
};
int main(){
    base *b;
    
    cout<<"virtual fun class"<<endl;
    b->method();
    
    

  
}