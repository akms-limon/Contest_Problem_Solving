#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int N;
        scanf("%d", &N);

        int A[N][N], i, j, max=0;
        for(i=0; i<N; i++) {
            for(j=0; (j<N&&scanf("%d", &A[i][j])); j++);
        }

        for(i=0; i<N; i++) {
            for(j=0; j<N; j++) {
                int sum=0;
                for(int a=i, b=j; a<N&&b<N; a++, b++) {
                    sum += A[a][b];
                    if(sum>max) {max=sum;}
                }
            }
        }
        printf("%d\n", max);
    }
    return 0;
}