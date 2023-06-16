#include <stdio.h>
#include<string.h>

int main()
{
    char s[10001];
    scanf("%s", s);
    int n= strlen(s);
    int ara[10]={'0', '1', '2', '3', '4','5','6','7','8','9'};
    for (int i = 0; i < 10; i++)
    {
        int count=0;
        for (int j = 0; j < n; j++)
        {
            if(ara[i]==s[j])
            count++;
        }
        printf("%d ", count);
    }
    printf("\n");
    return 0;
}