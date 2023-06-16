/**
 *    author: A K M S Limon
 *    created: 12-October-2022  13:05:25
**/
#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the size of first string : ");
    scanf("%d", &n);
    printf("Enter the size of first string : ");
    scanf("%d", &m);
    char s1[n], s2[m];
    printf("Enter your first string : ");
    for (int i = 0; i < n; i++){
        scanf("%c", &s1[i]);
    }
    printf("Enter your second string : ");
    for (int i = 0; i < m; i++){
        scanf("%c", &s2[i]);
    }
    if(n==m) {
        int ss1=0;
        for (int i = 0; i < n; i++)
        {   printf("%c %c", s1[i], s2[i]);
            if(s1[i]==s2[i]) continue;
            else if(s1[i]>s2[i]){
                ss1=1;
                break;
            }
            else{
                ss1=-1;
                break;
            }
        }
        if(ss1==0)printf("S1 and S2 is equal.\n");
        else if(ss1==1) printf("S1 is greater.\n");
        else if(ss1==2) printf("S2 is greater.\n");
    }
    else{
        int flag;

        if(m<n){
            int temp=n; 
            n=m; 
            m=temp;
        }

        for (int i = 0; i < n; i++)
        {
            if(s1[i]>s2[i]){
                printf("S1 string is greater.\n");
                break;
            }
        }
    }
    
    
    
    return 0;
}