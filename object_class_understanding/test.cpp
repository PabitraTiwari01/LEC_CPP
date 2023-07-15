#include<iostream>
using namespace std;
class employee{
    private:
    char name[25];
    float salary;
    public:
    void getdata(){
        cout<<"\n enter name:";
        cin<<name;
        cout<<"Enter salary";
        cin>>salary;
    }
    void showdata(){
        cout<<"\nName:"<<name<<endl;
        cout<<"Salary:"<<salary;
    }
};
int main(){
    employee *eptr;
    employee e;
    eptr = &e;
    eptr ->getdata();
    cout<<"\nAcessing data through pointer vriable:";
    eptr ->showdata();
    return 0;


}
class test
{
private:
    /* data */
public:
    test(/* args */);
    ~test();
};

test::test(/* args */)
{
}

test::~test()
{
}
