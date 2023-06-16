#include<stdio.h>
int main()
{
    int var=1000;
    int *pointer;
    
    pointer = &var;

    printf("Address of var = %p\n", &var);
    printf("Value of pointer = %p\n\n", pointer);


    printf("Value of var = %d\n", var);
    printf("Value pointer is pointing to = %d\n", *pointer);
    return 0;
}