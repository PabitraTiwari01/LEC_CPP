#include <iostream>
using namespace std; //code snipet
void display(){
    static int i=1;
    i=i+5;
    cout<<"The value of i is:"<<i<<endl;
}
int main(){
    display();
    display();
}//class variable is static variable