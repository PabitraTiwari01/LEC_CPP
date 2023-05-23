#include <iostream>
using namespace std;
int main()
{
    int colour;
    
    cout<<"Enter the number of the colour:";
    cin>>colour;
    cout<<"The colour  is:"<<endl;
    switch(colour)
    {
        case 1 :
        cout<<"orange";
        break;
        case 2:
        cout<<"green";
        break;
        case 3 :
        cout<<"yellow";
        break;
        case 4:
        cout<<"blue";
        break;
        case 5:
        cout<<"black";
        break;
        default:
        cout<<"The colour is not available in the list";\
        break;
    
    }
    

}