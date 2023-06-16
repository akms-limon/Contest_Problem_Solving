#include<stdio.h>
int main()
{
    int a, n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d",n/2);
    }
    else
    printf("%d", (n/2)+1);
    return 0;
}