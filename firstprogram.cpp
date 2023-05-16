#include<iostream>
using namespace std;
class student{
    int rollno;
    int age;
    char home[50];
    public:
    void read(){
    
        cout<<"enter the rollno:";
        cin>>rollno;
        cout<<"enter age:";
        cin>>age;
    }
        void homework(){
            cout<<"homework is completed or not[y/n]";
            cin>>home;
        }
        
        
        void info()
        {
            cout<<"rollno:"<<rollno<<endl;
            cout<<"age:"<<age<<endl;
            cout<<"homework completion status:"<<home<<endl;
        }
        
    };
    
    int main()
        {
            student niruja,sanjina;
            cout<<"student:niruja"<<endl;
            niruja.read();
            niruja.homework();
            niruja.info();
            cout<<"student:sanjina"<<endl;
            sanjina.read();
            sanjina.homework();
            sanjina.info();

        }
    
