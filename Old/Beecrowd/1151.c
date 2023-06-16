#include <stdio.h>
 
int main() {
    int a, b, c, d, e;
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        c=24-a;
        d=0+b;
        e=c+d;
        printf("O JOGO DUROU %d HORA(S)\n", e);
    }
    if(b>a)
    {
        e=b-a;
        printf("O JOGO DUROU %d HORA(S)\n", e);
    }
 
    return 0;
}