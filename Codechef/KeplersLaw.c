#include<stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        double t1, t2, r1, r2;
        scanf("%lf%lf%lf%lf", &t1, &t2, &r1, &r2);
        double a=(t1*t1)/(r1*r1*r1);
        double b=(t2*t2)/(r2*r2*r2);
        if(a==b)
        {
            printf("Yes/n");
        }
        else
        {
            printf("No/n");
        }
    }
	return 0;
}