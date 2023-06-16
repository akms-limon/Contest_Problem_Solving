#include<stdio.h>

int main(){

    int n; scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }


    int p; scanf("%d", &p);
    int arr2[p];
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &arr2[i]);
    }


    int m=n+p;
    int arr[m];
    for (int i = 0; i < n; i++)
    {
        arr[i]=arr1[i];
    }
    for (int i = 0, j=n; i < n, j<m; i++, j++)
    {
        arr[j]=arr2[i];
    }


    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}