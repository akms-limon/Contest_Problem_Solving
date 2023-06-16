#include<stdio.h>
int main()
{
    float cgpa, sum=0;
    int i, n=5;
    for(i=1; i<=5; i++)
    {
        int mark;
        scanf("%d", &mark);
        if(mark>=80)
        {
        printf("A+\n");
        sum+=3*4;
        }
        else if(mark>=75)
        {
        printf("A\n");
        sum+=3*3.75;
        }
        else if(mark>=70)
        {
        printf("A-\n");
        sum+=3*3.50;
        }
        else if(mark>=65)
        {
        printf("B+\n");
        sum+=3*3.25;
        }
        else if(mark>=60)
        {
        printf("B\n");
        sum+=3*3.00;
        }
        else if(mark>=55)
        {
        printf("C+\n");
        sum+=3*2.75;
        }
        else if(mark>=50)
        {
        printf("C\n");
        sum+=3*2.50;
        }
        else if(mark>=40)
        {
        printf("D\n");
        sum+=3*2.00;
        }
        else if(mark<40)
        {
        printf("F\n");
        sum+=3*0;
        }
    }

    cgpa= sum/15;

    printf("CGPA = %.2f", cgpa);

    return 0;

}