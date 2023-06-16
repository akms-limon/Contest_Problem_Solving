#include<stdio.h>
int main()
{
    int i;
    for(; ; i++)
    {
    double num1, num2, num3;
    printf("Enter your two number :\n");
    scanf(" %lf %lf", &num1, &num2);
        printf("Enter an integer number from 1 to 4 : ");
        scanf("%lf", &num3);
         if(num3==1)
        {
            printf(" Thanks for input, your summation is : %.2lf + %.2lf = %.2lf\n\n", num1, num2, num1+num2);
        }   
        else if(num3==2)
        {
            printf(" Thanks for input, your substraction is : %.2lf - %.2lf = %.2lf\n\n", num1, num2, num1-num2);
        }
        else if(num3==3)
        {
            printf("Thanks for input, your multiplication is : %.2lf * %.2lf = %.2lf\n\n", num1, num2, num1*num2);
        }
        else if(num3==4)
        {
            printf("Thanks for input, your division is : %.2lf / %.2lf = %.2lf\n\n", num1, num2, num1/num2);
        }
        else if(num3==0)
        {
            printf("Thanks for ending the process. You are most wellcome.\n");
            break;
        }
        else
        {
            printf("Thanks for input, your input is Wrong! Please enter an integer number from 1 to 4.\n\n");
        }
    }
    return 0;
}