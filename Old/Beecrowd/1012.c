#include<stdio.h>
int main()
{
    double a, b, c, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO, pi = 3.14159;
    scanf("%lf %lf %lf", &a, &b, &c);
    TRIANGULO = (1.0/2)*a*c;
    CIRCULO = pi*c*c;
    TRAPEZIO = (1.0/2)*(a+b)*c;
    QUADRADO = b*b;
    RETANGULO = a*b;
    printf("TRINGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);
    return 0;
}