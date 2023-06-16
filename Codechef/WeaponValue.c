#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int count=0;
        int n;
        scanf("%d", &n);
        char ch[11];
        char ch1[11];
        for (int i = 0; i < n; i++)
        {
            if(i>0)
            {
                scanf("%s", ch1);
                for (int j = 0; j < 10; j++)
                {
                    if(ch[j]!=ch1[j])
                    {
                        ch[j]='1';
                    }
                    else
                    {
                        ch[j]='0';
                    }
                }
            }
            else
            {
                scanf("%s", ch);
            }
            
        }
        for (int i = 0; i < 10; i++)
        {
            if (ch[i]=='1') 
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}