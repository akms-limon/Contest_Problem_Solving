#include<stdio.h>
int main() {
    
    for (int i = 1; i <=26; i++)
    {
        printf("Roll of all students of department %d is :\n", i);
        for (int j = 1; j <= 30; j++)
        {
            printf("%d ", j);
        }
        printf("\n\n");
    }
    return 0;
}