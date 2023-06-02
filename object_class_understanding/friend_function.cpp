#include <iostream>
using namespace std;
class Freinds{
   
    int num;
    char name[20];
    char adress[30];
    public:
   
   void freindsname(){
        cout<<"the name of the freind is:"<<endl;
        cin>>name;
        
    }

    void freindsadress(){
        cout<<"The adress of the freind is"<<endl;
        cin>>adress;

    }
    void freindsnum(){
        cout<<"The number of the freind is"<<endl;
        cin>>num;
        

    }
    void showvalue(){
        cout<<"\nName"<<name;
        cout<<"\nadress"<<adress;        
        cout<<"\number"<<num;

    }
};
int main(){
    Freinds f;
    f.freindsname();
    f.freindsnum();
    f.freindsadress();
    f.showvalue();
}