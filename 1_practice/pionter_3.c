#include <stdio.h>
int main()
{
    int*pc,c;
    c=22;
    printf("Address of c: %p\n",&c);
    printf("calue of c: %d\n\n");

    pc=&c;
    printf("Address of pointer pc: %p\n",pc);
    printf("Content of pointer pc: %d\n\n", *pc);

    c=11;
    printf("Adressmof pointer pc: %p\n",pc);
    printf("contentnof pointer pc: %d\n\n", *pc);
    return 0;





}
