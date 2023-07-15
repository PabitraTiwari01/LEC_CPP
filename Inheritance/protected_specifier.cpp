#include <iostream>
using namespace std;
class Parent{
    public:
    int id_protected;
};

class Child:public Parent{
    public:
    void setid(int id)
    {
        id_protected=id;
    }
    void displayid(){ 
        cout<<"id_protected is:"<<id_protected<<endl;
    }
};
int main(){
    Child obj1;
    obj1.setid(4);
    obj1.displayid();

 

}