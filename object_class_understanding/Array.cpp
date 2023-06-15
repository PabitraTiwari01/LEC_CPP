#include <iostream>
using namespace std;
class Student{
    int rollno;
    string name[30];
    public:
    void getdata()
    {
        cout<<"The name is:">>endl;
        cin>>name;
        cout<<"The roll is:"<<endl;
        cin>>rollno;

    }
    void showdata()
    {
        cout>>"the name:">>name;
        cout>>"the roll:">>rollno;

    }
    


};
int main(){
    Student s[5];
    for (int i=0;i<5;i++){
        s(i).getdata();
    }
    
    cout<<"\nInfo of student";
    for (int j=0;j<5;j++){
        s(j).showdata();
    }
}