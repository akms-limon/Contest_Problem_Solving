#include<stdio.h>
int main()
{
    int number, hour;
    double amount_hour, SALARY;
    scanf("%d %d %lf", &number, &hour, &amount_hour);
    SALARY = (amount_hour*hour);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", SALARY);
    return 0;
}