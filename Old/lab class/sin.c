#include<stdio.h>
#include<math.h>
int main()
{
    float degree, radian, value;
    printf("Enter the value of degree :");
    scanf("%f", &degree);
    radian= (degree*M_PI)/180;
    value=sin(radian);
    printf("sin(%.0f) is : %f", degree, value);
    return 0;
}