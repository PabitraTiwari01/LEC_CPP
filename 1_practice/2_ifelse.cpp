#include<iostream>
using namespace std;
int main()
{
    int dig1,dig2,dig3;
    cout<<"Enter threee integers:";
    cin>>dig1>>dig2>>dig3;
    if(dig1>dig2)
        if(dig1>dig2)
        cout<<dig1<<"\nIs the largest:";
            else
            cout<<dig3<<"\nIs the largest";
        else    
            if(dig2>dig3)
            cout<<dig2<<"\nIs the largest";
            else
            cout<<dig3<<"\nIs the largest";
            system("pause");
            return 0;    
}