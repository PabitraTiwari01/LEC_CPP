#include<iostream>
using namespace std;
class Vehicle{
    private:
    int platenumber;
    public:
    Vehicle (int pnum){
        platenumber = pnum;
        cout<<"THe value of the plate number is:"<<platenumber;
    }
    int getnumber(int p){
        platenumber=p;
        cout<<"the value of plate number is:"<<platenumber;
        return platenumber;
        // cout<<"Enter the number of the scooter:";
        // cin>>platenumber;
        // return platenumber;
    
    }
};
int main(){
    Vehicle scooter;
    cout<<"my plate number is"scooter.getnumber(4545)
    // scooter.platenumber=1244;
    // cout<<"The plate number is:"<<scooter.platenumber;
    
    
    }
