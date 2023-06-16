#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter dimension of first matrix :\n ");
    scanf("%d %d", &a, &b);
    int matrix[a][b];
    for (int i = 0; i < a; i++)
    {
     for (int j = 0; j < b; j++)
    {
     scanf("%d", &matrix[i][j]);
    }
    }
    int c, d;
    printf("Enter dimension of second matrix :\n ");
    scanf("%d %d", &c, &d);
    int matrix1[c][d];
    for (int i = 0; i < c; i++)
    {
    for (int j = 0; j < d; j++)
    {
    scanf("%d", &matrix1[i][j]);
    }
    }
    int sum[a][b];
    if (a!=c || b!=d)
    {
    printf("this is not sumable.\n");
    }
    else
    {
    for (int i = 0; i < a; i++)
    {
    for (int j = 0; j < d; j++)
    {
    sum[i][j]=matrix[i][j]+matrix1[i][j];
    printf("%d ", sum[i][j]);
    }
    printf("\n");
    }
    }
    return 0;
}