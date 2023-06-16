#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    gets(s);
    int m = strlen(s);
    for (int i = 0; i < m; i++ )
    {
        if(s[i]=='.')
        {
            printf("0");
        }
        if(s[i]=='-' && s[i+1]=='.')
        {
            printf("1");
            i++;
        }
        if(s[i]=='-' && s[i+1]=='-')
        {
            printf("2");
            i++;
        }
    }
    printf("\n");
    return 0;
}