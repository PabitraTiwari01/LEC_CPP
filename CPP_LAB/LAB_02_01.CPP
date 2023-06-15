//Write a Program to swap the numbers using reference variables. Initialize the variables used tostore the number dynamically.
#include<iostream>
using namespace std;
void swap(int *x, int *y) {
   int *temp; 
   temp = x;
   x= y;
   y = temp;
}
int getnum(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    return a;
}
int main()
    {
    int num1=getnum();
    int num2=getnum();
    cout<<"Values before swap are:"<<num1<<"and"<<num2<<endl;
    swap(num1, num2);
    cout<<"Values after swap is:"<<num1<<"and"<<num2<<endl;
 }