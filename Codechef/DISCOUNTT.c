#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, c, e;
        scanf("%d%d%d", &n, &c, &e);
        int ara[n];
        int count=0;
        int count1=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
            count+=ara[i];
            if(e<=ara[i])
            {
                ara[i]=ara[i]-e;
            }
            else
            {
                ara[i]=0;
            }
            count1+=ara[i];
        }
        int count3=count1+c;
        if (count3<count)
        {
            printf("COUPON\n");
        }
        else
        {
            printf("NO COUPON\n");
        }
    }
	return 0;
}

