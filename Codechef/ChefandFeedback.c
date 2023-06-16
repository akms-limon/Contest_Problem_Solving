#include <stdio.h>
#include<string.h>
int main(void) {
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[100001];
        scanf("%s", s);
        int n=strlen(s);
        int count=0;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]=='1')
            {
                if(s[i+1]=='0')
                {
                    if(s[i+2]=='1')
                    {
                        count=1;
                        break;
                    }
                }
            }
            if(s[i]=='0')
            {
                if(s[i+1]=='1')
                {
                    if(s[i+2]=='0')
                    {
                        count=1;
                        break;
                    }
                }
            }
        }
        if(count==1)
        {
            printf("Good\n");
        }
        else
        printf("Bad\n");
    }
	return 0;
}