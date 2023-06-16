#include <stdio.h>
int main()
{
    int row, col;
    printf("Input your row and col of first matrix and second matrix :");
    scanf("%d %d", &row, &col);
    int mat1[row][col], mat2[row][col], sum[row][col]; // In summation of  a matrix the row and col of all matrix is same.
    printf("Enter your element of first matrix:\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter your element of second matrix:\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("Sum of two matrix is :\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}