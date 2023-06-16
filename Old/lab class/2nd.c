#include<stdio.h>
int main()
{
    int number;
    printf("enter your number:");
    scanf(" %d", &number);
    if(number%2==0)
    printf("this number is even");
    else
    printf("this number is odd");
    return 0;
}