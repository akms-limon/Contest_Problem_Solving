#include<stdio.h>
int main()
{
    double n,p, t;
    scanf("%lf", &n);
    if(n>=0 && n<=400)
    {
        p=(n*15)/100;
        t=n+p;
        printf("Novo salario: %.2lf\n", t);
        printf("Reajuste ganho: %.2lf\n", p);
        printf("Em percentual: 15 %%\n");
    }
    else if(n>400 && n<=800)
    {
        p=(n*12)/100;
        t=n+p;
        printf("Novo salario: %.2lf\n", t);
        printf("Reajuste ganho: %.2lf\n", p);
        printf("Em percentual: 12 %%\n");
    }
    else if(n>800 && n<=1200)
    {
        p=(n*10)/100;
        t=n+p;
        printf("Novo salario: %.2lf\n", t);
        printf("Reajuste ganho: %.2lf\n", p);
        printf("Em percentual: 10 %%\n");
    }
    else if(n>1200 && n<=2000)
    {
        p=(n*7)/100;
        t=n+p;
        printf("Novo salario: %.2lf\n", t);
        printf("Reajuste ganho: %.2lf\n", p);
        printf("Em percentual: 7 %%\n");
    }
    else if(n>2000)
    {
        p=(n*4)/100;
        t=n+p;
        printf("Novo salario: %.2lf\n", t);
        printf("Reajuste ganho: %.2lf\n", p);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}