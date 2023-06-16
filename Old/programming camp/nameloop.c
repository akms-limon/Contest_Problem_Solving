#include<stdio.h>
int main()
{
char a[100];
int i,n;
printf("enter your name: ");
gets(a);
printf("enter time: ");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
printf("%s\n",a);
}
return 0;
}