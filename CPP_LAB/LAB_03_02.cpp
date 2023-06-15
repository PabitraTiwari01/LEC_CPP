#include <iostream>
using namespace std;
int *roll = new int;
char *name = new char[20];
void scanRollandName(){
    cout <<"Enter your name: ";
    cin>>name;
    cout<<"Enter your roll no: ";
    cin>>*roll;

}
void freememory(){
    delete roll;
    delete [] name;
}
void printRollandName(){
    cout<<"Name: "<<name<<endl;
    cout<<"Rollno: "<<*roll<<endl;
}
int main(){
    scanRollandName();
    cout<<"Memory allocated dynamiclaly for roll and name"<<endl;
    cout<<"Value of name nad roll before allocation"<<endl;
     printRollandName();
  
    cout<<"After deallocation\n"<<endl;
      freememory();
      printRollandName();
    return 0;


}
