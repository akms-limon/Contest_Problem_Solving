#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b;
        int x;
        int count=0;
        int count1=0;
        scanf("%d %d", &a, &b);
        if(a>0)
        {
            a=a%4;
            if(b==1)
        {
            for (int i=1; i<a; i++)
            {
                x=i+a;
                if(x%4==0)
                {
                    count=1;
                }
                else if(x%4!=0)
                {
                    count1==1;
                }
            }
        }
        else if(b==0)
        {
            x=4+a;
            if(x%4==0)
            {
                count=1;
            }
            else if(x%4!=0)
            {
                count1=1;
            }
        }
        }
        else if(a==0)
        {
            if(b==1)
            {
                count1==1;
            }
            else if(b==0)
            {
                count==1;
            }
        }
        
        
        if(count==1 && count1==0)
        {
            printf("Off\n");
        }
        else if(count1==1 && count==0)
        {
            printf("On\n");
        }
        else if(count==1 && count1==1)
        {
            printf("Ambiguous\n");
        }
    }
	return 0;
}

