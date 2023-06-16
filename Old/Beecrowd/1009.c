#include<stdio.h>
int main()
{
    double a, b, c;
    char ch[20];
    scanf("%s", &ch);
    scanf("%lf %lf", &a, &b);
    c = a + (b*15)/100;
    printf("TOTAL = R$ %.2lf\n", c);
    return 0;
}