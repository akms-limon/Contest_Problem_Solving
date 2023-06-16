#include<stdio.h>
int main()
{
    int i=1;
    for( ; i<=20; i++)
    {
        if( i%5==0) 
        {
            printf("This is a multiples of Five!\n");
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}