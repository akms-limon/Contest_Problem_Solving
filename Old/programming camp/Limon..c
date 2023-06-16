#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    gets(ch);
    int n=strlen(ch);
    printf("%d",n);
    return 0;
}