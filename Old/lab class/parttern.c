#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            if(i%2==0)
            {
                printf("* ");
            }
            else if(i%2==1)
            {
                if (j==col/2 || j==(col/2)-1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}