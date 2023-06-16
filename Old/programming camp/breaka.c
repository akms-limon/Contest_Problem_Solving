#include<stdio.h>
int main()
{
    int num;
    while (1)
    {
        printf("Enter a even number :");
        scanf(" %d", &num);
        if(num%2==0)
        {
            printf("You entered a even number!\n");
            printf("Break not working.\n\n");
        }
        else if(num%2!=0)
        {
        printf(" Wrong input!");
        break;
        }
    }
    return 0;
}