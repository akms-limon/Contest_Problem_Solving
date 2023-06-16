#include<stdio.h>
int main()
{
    double pi=3.14159, R, v;
    scanf("%lf", &R);
    v = (4.0/3)*pi*R*R*R;
    printf("VOLUME = %.3lf", v);
    return 0; 
}