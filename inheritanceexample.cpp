#include<iostream>
using namespace std;
class Account{
    public:
    float salary = 50000;
    float dashainbonus = 70000;

     Account(){
       cout<<"this is account"<<endl; 
    } // construtor are those  special methods which has same name as class's name and has no return type
}; // base class
class programmer: public Account
{
    

    
}; // derived class
int main() 
{
    Account Account1;
    return 0;



}