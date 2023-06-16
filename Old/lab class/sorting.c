#include<stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void selectionShort(int array[], int size)
{
    for(int step = 0; step < size-1; step++)
    {
        int minIndx=0;
        for (int i = step + 1; i < size-1; i++)
        {
            if(array[i] < array[minIndx])
                minIndx=i;
        }
        swap(&array[minIndx], &array[step]);  
    }
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main()
{
    int n; scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }
    selectionShort(ara, n);
    printf("\n");
    printArray(ara, n);
    return 0;
}