#include<stdio.h>
int main()
{
    float f, c;
    printf("Enter the value of celcius : ");
    scanf("%f",&c);
    f=(9*c+32*5)/5;
    printf("The value of ferenhite is : %.2f", f);
    return 0;
}