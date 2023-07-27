#include<iostream>
using namespace std;
#include<cmath>
class Number{
    private:
    double num;
    public:
    class NEG{};//exception class
    void readnum();
    double sqroot();
};
void Number::readnum(){
    cout<<"Enter number:";

}
double Number::sqroot(){
    if(num<0)
    throw NEG();
    else
    return(sqrt(num));
}
int main()
{
    Number n;
    double r;
    n.readnum();
    try{
        cout<<"\n We are to find the squareroot here..";
        r=n.sqroot();
        cout<<"\nThe square root is:"<<r<<endl;
        cout<<"If a success the exception is not raised"<<endl;
        
    }
    catch(Number::NEG){
        cout<<"The squareroot is not possible when the number is negative"<<endl;
    }
    return 0;
    }
