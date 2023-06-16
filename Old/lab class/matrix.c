#include<stdio.h>
int main()
{
    int n, row, col;
    scanf("%d%d",&row, &col);
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}