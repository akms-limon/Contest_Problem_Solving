#include<stdio.h>
int main()
{
    char str[]="Limon";
    char name[]="Limon";
    int n=strlen(str);
    int i, j=0,flag=0;
    for(i=0; i<n; i++)
    {
        if(str[i]==name[i])
        j++;
        else
        {
            flag=0;
            break;
        }
        if(flag==1)
        {
            printf("congratulation");
        }
    }
}