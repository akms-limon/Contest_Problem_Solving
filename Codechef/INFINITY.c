#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, a=0;
        scanf("%d", &n);
        if(n==1)
        {
            printf("0\n");
            continue;
        }
        else if (n<=3)  
        {
            printf("1\n");
            continue;           
        }
        else
        {
            a=(n/5)*2;
            if (n%5==0 || n%5==1)
            {
                printf("%d\n", a );
            }
            else if(n%5<=4)
            {
                printf("%d\n", a+1);
            }
            
        }
    }
	return 0;
}