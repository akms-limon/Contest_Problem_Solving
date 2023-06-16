#include <stdio.h>
int main()
{
    int row, col;
    printf("Input your row and col of first matrix:\n");
    scanf("%d %d", &row, &col);
    int mat[row][col];
    printf("Enter your element of first matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int row1, col1;
    printf("Input your row and col of second matrix: \n");
    scanf("%d %d", &row1, &col1);
    int mat1[row1][col1];
    printf("Enter your element of second matrix:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    int sum[row][col1];
    if (row != row1 || col !=col1)
    {
        printf("this is not sumable.\n");
    }
    else
    {
        printf("Summation of two matrix is :\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                sum[i][j]=mat[i][j]+mat1[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}