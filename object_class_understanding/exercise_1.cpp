//A typical example of class
#include <iostream>
using namespace std;
class simple
{  
    int data1;
    int data2;
    public:
    void setdata(int d1, int d2)
    {
        data1=d1;
        data2=d2;
    }
    void showdata()
    {
        cout<<"\ndata1="<<data1<<endl;
        cout<<"data2="<<data2<<endl;

    }
};

