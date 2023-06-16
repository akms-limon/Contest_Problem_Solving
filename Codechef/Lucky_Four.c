#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char n[11];
        int count = 0;

        scanf("%s", n);
        for (int i = 0; i < strlen(n); i++)
        {
            if (n[i] == '4')
                count++;
        }

        printf("%d\n", count);
    }

    return 0;
}