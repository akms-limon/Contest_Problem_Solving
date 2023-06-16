#include <stdio.h>
 
int main() {
    int n;
    int year, month, day;
    int p;
    scanf("%d", &n);
    year=n/365;
    p=n%365;
    month=p/30;
    day=p%30;
    printf("%d ano(s)\n", year);
    printf("%d mes(s)\n", month);
    printf("%d dia(s)\n", day);
    return 0;
}