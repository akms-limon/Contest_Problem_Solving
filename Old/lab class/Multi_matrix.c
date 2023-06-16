#include <stdio.h>

int main()
{
    int row1, row2, col1, col2;
    printf("enter your row and col of 1st matrix:\n");
    scanf("%d %d", &row1, &col1);
    printf("enter your row and col of 2nd matrix:\n");
    scanf("%d %d", &row2, &col2);
    int mat1[row1][col1], mat2[row2][col2], sum[row1][col2];
    printf("Enter your element of 1st matrix:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }   
    }
    printf("Enter your element of 2nd matrix:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &mat2[i][j]);
        } 
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            sum[i][j]=0;
            for (int k = 0; k < col1; k++)
            {
                sum[i][j]+=mat1[j][k]*mat2[k][j];
            } 
        }
    }
    printf("multiplication of two matrix is:\n ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }   
    return 0;
}