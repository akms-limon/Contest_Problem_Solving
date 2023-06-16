#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, d1, d2, R1, R2;
    double roots;
    scanf("%lf %lf %lf", &a, &b, &c);
    roots= b*b-4*a*c;
    if(a==0 || roots<0)
    {
        printf("Impossivel calcular");
    }
    else
    {
        d1 = -b+sqrt(roots);
        d2 = -b-sqrt(roots);
        R1 = d1/(2*a);
        R2 = d2/(2*a);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    return 0;
}