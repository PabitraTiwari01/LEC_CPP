#include <iostream>
using namespace std;
int main()
{
    string sub[]={"TOC","EM","DL","OOP","EDC"};
    int mark[5];
    int i,total;
    for(i=0;i<5;i++)
    {
        cout<<"\n Enter the marks of "<<sub[i]<<":";
        cin>>mark[i];
    }
    for (i=0;i<5;i++)
    {
        total+=mark[i];
    }
    cout<<"\nthe total is;"<<total;
}
