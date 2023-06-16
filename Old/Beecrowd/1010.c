#include<stdio.h>
int main()
{
    int code1, code2, unit1, unit2;
    double prize1, prize2, total;
    scanf("%d %d %lf", &code1, &unit1, &prize1);
    scanf("%d %d %lf", &code2, &unit2, &prize2);
    total = (unit1*prize1)+(unit2*prize2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}