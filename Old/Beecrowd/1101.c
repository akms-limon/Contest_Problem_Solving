#include<stdio.h>
int main()
{
    int a, b;
    int less, j, sum=0;
    scanf("%d %d", &a, &b);
    if(a<=0 || b<=0)
    break;
    if(a>0 && b>0)
    {
        if(a>b)
        {
            less=b; 
            j=a;
        }
        else
        {
            less=a;
            j=b;
        }
        for(less; less<=j; less++)
        {
            printf("%d ", less);
            sum=sum+less;
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}