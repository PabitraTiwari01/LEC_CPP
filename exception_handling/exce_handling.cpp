#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the values of a and b:"<<endl;
    cin>>a>>b;
    int x=(a-b);
    try{
        if(x!=0){
            cout<<"\n result:"<<(a/(a-b))<<endl;
        }
        else{
            throw(x);
        }
    }
    catch(int i){
        cout<<"division by zero is not allowed"<<endl;
    }
    cout<<"next statement"<<endl;
    return 0;
    
}
