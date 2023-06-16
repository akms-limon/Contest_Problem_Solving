#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,count=0,r;
	    scanf("%d",&a);
	    while(a!=0)
	    {
	        r=a%10;
	        if(r==7)
	        {
	            count++;
	        }
	        a=a/10;
	    }
	    if(count>0)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}