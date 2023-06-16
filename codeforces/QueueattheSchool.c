#include<stdio.h>

void swap(char *num1, char *num2) 
{ 
char temp = *num1; 
*num1 = *num2; 
*num2 = temp;
}
int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    char ch[n];
    scanf("%s", &ch);
    while(t--)
    {
        for (int i = 0; i < n-1; )
        {
            if(ch[i]=='B' && ch[i+1]=='G')
            {
                swap(&ch[i], &ch[i+1]);
                i=i+2;
            }
            else
            {
                i++;
            }
        }
    }
    printf("%s\n", ch);
    return 0;
}