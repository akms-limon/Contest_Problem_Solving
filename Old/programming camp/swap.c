#include<stdio.h>
int swap(int *a, int *b)
{
    int x;
    x=*a;
    *a=*b;
    *b=x;
}
#include <stdio.h> bc 

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}