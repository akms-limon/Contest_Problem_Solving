#include<stdio.h>
int main()
{
    int A, B, a;
    scanf("%d %d", &A, &B);
    a=A+B;
    if(a>=10)
    {
        printf("error");
    }
    else{
        printf("%d", a);
    }
    return 0;
}