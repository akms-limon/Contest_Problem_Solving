#include <stdio.h>
#include <string.h>

int is_palindrome(char st[],int len)
{
    char st2[1000];
    int value=0;
    int i=0,j=len-1;
    while (i < len && j >= 0)  
    {
        st2[i]=st[j];
        i++;
        j--;
    }
    st2[len] = '\0';
    if (strcmp(st2,st)==0)
    {
       value++;
    }
    else
    {
       value=0;
    }
    return value;
}
int main ()
{
    char st[1000];
    scanf("%s",st);
    int length=strlen(st);
    int value_for_palindrome = is_palindrome(st,length);

    if(value_for_palindrome==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}