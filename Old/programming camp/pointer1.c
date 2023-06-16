#include<stdio.h>
void f(int *N)
{
    *N += 2;
}
int main()
{
    int n=5;
    f(&n);
    printf("%d\n", n);
    return 0;
}