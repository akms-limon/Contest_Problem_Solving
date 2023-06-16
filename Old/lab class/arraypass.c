#include <stdio.h>

int sum(int num[])
{
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum=sum+num[i];
    }
    return sum;
    
}

int main()
{
    int numb[10]={1,2,3,4,5,6,7,8,9,1};
    int summ;
    summ=sum(numb);
    printf("%d\n", summ);
    
    return 0;
}