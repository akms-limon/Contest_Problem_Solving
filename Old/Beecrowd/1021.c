#include <stdio.h>
int main()
{
    double taka,aux;
    scanf("%lf", &taka);
    int p;
    printf("NOTAS:\n");
    p=taka/100;
    printf("%d nota(s) de R$ 100.00\n", p);
    aux=taka - 100*p;
    p= aux/50;
    printf("%d nota(s) de R$ 50.00\n", p);
    aux = aux - 50*p;
    p= aux/20;
    printf("%d nota(s) de R$ 20.00\n", p);
    aux= aux - 20*p;
    p= aux/10;
    printf("%d nota(s) de R$ 10.00\n", p);
    aux = aux - 10*p;
    p= aux/5;
    printf("%d nota(s) de R$ 5.00\n", p);
    aux = aux - 5*p;
    p= aux/2;
    printf("%d nota(s) de R$ 2.00\n", p);
    aux = aux - 2*p;
    printf("MOEDAS:\n");
    p= aux/1;
    printf("%d moeda(s) de R$ 1.00\n", p);
    aux = aux - 1*p;
    p= aux/0.50;
    printf("%d moeda(s) de R$ 0.50\n", p);
    aux = aux - 0.50*p;
    p= aux/0.25;
    printf("%d moeda(s) de R$ 0.25\n", p);
    aux = aux - 0.25*p;
    p= aux/0.10;
    printf("%d moeda(s) de R$ 0.10\n", p);
    aux = aux - 0.10*p;
    p= aux/0.05;
    printf("%d moeda(s) de R$ 0.05\n", p);
    aux = aux - 0.05*p;
    p= aux/0.01;
    printf("%d moeda(s) de R$ 0.01\n", p);
    aux = aux - 0.01*p;
    return 0;
}