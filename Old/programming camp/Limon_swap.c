#include<stdio.h>
int main()
{
    int A, B, n;
    scanf("%d %d", &A, &B);
    n = A;
    A = B;
    B = n;
    printf("A = %d B = %d", A, B);
    return 0;
}