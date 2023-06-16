#include <stdio.h>
 
int main() {
    int f=12, t, v;
    double s, fuel;
    scanf("%d %d", &t, &v);
    s=v*t;
    fuel=s/f;
    printf("%.3lf\n", fuel);
    return 0;
}     