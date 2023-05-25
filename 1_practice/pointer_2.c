#include<stdio.h>
void main()
{
    int*pc,c;
    c=5;
    pc=&c;
    printf("value of address of c is given by pointer variable %p",pc);
    printf("value of c is given by *pc %d",*pc);

}