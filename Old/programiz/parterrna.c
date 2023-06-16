#include<stdio.h>
int main()
{
    int i, j;
    char c, cc, ccc='A';
    scanf("%c", &c);
    if(c>='a' && c<='z')
    {
        cc=c-'a'+'A';
    }
    else
    {
        cc=c;
    }
    for(i=0; i<cc-'A'+1; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c", ccc);
        }
        printf("\n");
        ccc++;
    }
    return 0;
}