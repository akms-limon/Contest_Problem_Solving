#include<stdio.h>
#include<string.h>
int main()
{
    char name[] = "Mamun";
    char str[100];
    gets(str);
    int n = strlen(str);
    int i, j=0, flag=0;
    for(i=0; i<n; i++)
    {
        if(name[j]==str[i])
        {
            j++;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        printf("match\n");
    }
    else
    {
        printf("miss match\n");
    }
    return 0;
}