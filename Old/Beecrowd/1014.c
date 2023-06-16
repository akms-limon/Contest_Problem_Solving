#include<stdio.h>
int main()
{
    int km;
    double fuel, a;
    scanf("%d %lf", &km, &fuel);
    a= km/fuel;
    printf("%.3lf\n", a);
    return 0;
}