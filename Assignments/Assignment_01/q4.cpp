//constructor for multiple inherited derived class
#include<iostream>
using namespace std;
class baseone
{
    public:
    base_one()
    {
        cout<<"base_1 class constructor"<<endl;
    }
};
class basetwo
{
    public:
    base_two()
    {
        cout<<"base_2 class constructor"<<endl;
    }
};
class derived:public basetwo,public baseone
{
    public:
    derived()
    {
        cout<<"derived class constructor"<<endl;
    }
};
int main()
{
    derived d;
   return 0;
}