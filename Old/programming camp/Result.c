#include <stdio.h>
int main()
{
    float s1, s2, s3, s4, s5, sum = 0, cgpa;
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    // for s3
    if (s1 >= 80)
    {
        printf("A+\n");
        sum += (4 * 3); //sum = sum+ (4*3);
    }
    else if (s1 >= 75)
    {
        printf("A\n");
        sum += (3.75 * 3);
    }
    else if (s1 >= 70)
    {
        printf("A-\n");
        sum += (3.50 * 3);
    }
    else if (s1 >= 65)
    {
        printf("B+\n");
        sum += (3.25 * 3);
    }
    else if (s1 >= 55)
    {
        printf("B-\n");
        sum += (3.00 * 3);
    }
    else if (s1 >= 50)
    {
        printf("C\n");
        sum += (2.75 * 3);
    }
    else if (s1 >= 45)
    {
        printf("C-\n");
        sum += (2.50 * 3);
    }
    else if (s1 >= 40)
    {
        printf("D\n");
        sum += (2.00 * 3);
    }
    else
    {
        printf("F \n");
        sum += (0 * 3);
    }
    // for s2
    if (s2 >= 80)
    {
        printf("A+\n");
        sum += (4 * 3);
    }
    else if (s2 >= 75)
    {
        printf("A\n");
        sum += (3.75 * 3);
    }
    else if (s2 >= 70)
    {
        printf("A-\n");
        sum += (3.50 * 3);
    }
    else if (s2 >= 65)
    {
        printf("B+\n");
        sum += (3.25 * 3);
    }
    else if (s2 >= 55)
    {
        printf("B-\n");
        sum += (3.00 * 3);
    }
    else if (s2 >= 50)
    {
        printf("C\n");
        sum += (2.75 * 3);
    }
    else if (s2 >= 45)
    {
        printf("C-\n");
        sum += (2.50 * 3);
    }
    else if (s2 >= 40)
    {
        printf("D\n");
        sum += (2.00 * 3);
    }
    else
    {
        printf("F \n");
        sum += (0 * 3);
    }
    // for s3
    if (s3 >= 80)
    {
        printf("A+\n");
        sum += (4 * 3);
    }
    else if (s3 >= 75)
    {
        printf("A\n");
        sum += (3.75 * 3);
    }
    else if (s3 >= 70)
    {
        printf("A-\n");
        sum += (3.50 * 3);
    }
    else if (s3 >= 65)
    {
        printf("B+\n");
        sum += (3.25 * 3);
    }
    else if (s3 >= 55)
    {
        printf("B-\n");
        sum += (3.00 * 3);
    }
    else if (s3 >= 50)
    {
        printf("C\n");
        sum += (2.75 * 3);
    }
    else if (s3 >= 45)
    {
        printf("C-\n");
        sum += (2.50 * 3);
    }
    else if (s3 >= 40)
    {
        printf("D\n");
        sum += (2.00 * 3);
    }
    else
    {
        printf("F \n");
        sum += (0 * 3);
    }
    // for s4
    if (s4 >= 80)
    {
        printf("A+\n");
        sum += (4 * 3);
    }
    else if (s4 >= 75)
    {
        printf("A\n");
        sum += (3.75 * 3);
    }
    else if (s4 >= 70)
    {
        printf("A-\n");
        sum += (3.50 * 3);
    }
    else if (s4 >= 65)
    {
        printf("B+\n");
        sum += (3.25 * 3);
    }
    else if (s4 >= 55)
    {
        printf("B-\n");
        sum += (3.00 * 3);
    }
    else if (s4 >= 50)
    {
        printf("C\n");
        sum += (2.75 * 3);
    }
    else if (s4 >= 45)
    {
        printf("C-\n");
        sum += (2.50 * 3);
    }
    else if (s4 >= 40)
    {
        printf("D\n");
        sum += (2.00 * 3);
    }
    else
    {
        printf("F \n");
        sum += (0 * 3);
    }
    // for s5
    if (s5 >= 80)
    {
        printf("A+\n");
        sum += (4 * 3);
    }
    else if (s5 >= 75)
    {
        printf("A\n");
        sum += (3.75 * 3);
    }
    else if (s5 >= 70)
    {
        printf("A-\n");
        sum += (3.50 * 3);
    }
    else if (s5 >= 65)
    {
        printf("B+\n");
        sum += (3.25 * 3);
    }
    else if (s5 >= 55)
    {
        printf("B-\n");
        sum += (3.00 * 3);
    }
    else if (s5 >= 50)
    {
        printf("C\n");
        sum += (2.75 * 3);
    }
    else if (s5 >= 45)
    {
        printf("C-\n");
        sum += (2.50 * 3);
    }
    else if (s5 >= 40)
    {
        printf("D\n");
        sum += (2.00 * 3);
    }
    else
    {
        printf("F \n");
        sum += (0 * 3);
    }

    cgpa = sum/15;
    printf("CGPA = %.2f", cgpa);
    return 0;
}