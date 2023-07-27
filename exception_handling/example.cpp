#include <iostream>
using namespace std;
int main(){
    float x=-1.5;
    cout<<"before try \n";
    try{
        cout<<"inside try \n";
        if (x<0)
        {
            throw x;
            cout<<"after throw\n";
        }
    }
    catch (int x){
        cout<<"exception caught .Int type \n";
    }
    catch(float x){
        cout<<"exception caught.Floattype \n";
    }
    cout<<"After catch \n";
    return 0;
}