#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    char ch[n];
    for(i=0; i<n; i++)
    {
    scanf("%c", &ch[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%c", ch[i]);
    }
    return 0;
}