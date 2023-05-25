//defination outside the class
#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    char name[20];
    char phone[10];
    public:
    void getdata();//function declaration
    void showdata();

};
//end of class
void student::getdata()//function defination
{
    cout<<"\n Enter Rolll No:";
    cin>>roll;
    cout<<"/n Enter Name:";
    cin>>name;
    cout<<"Enter Phone number";
    cin>>phone;
}
void student::showdata()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Roll No:"<<roll<<endl;
    cout<<"Phone number:"<<phone<<endl;

}
int main()
{
    student s1,s2;;
    s1.getdata();
    s2.getdata();
    cout<<"First student"<<endl;
    s1.showdata();
    cout<<"second student"<<endl;
    s2.showdata();
    return 0;
}