#include<stdio.h>
int main(){
    int a, n, p;
    scanf("%d", &a);
    if(a%5==0){
        printf("%d", a/5);
    }
    else if(a%5==1){
    p=a-1;
    printf("%d", (p/5)+1);
    }
    else if(a%5==2){
    p=a-2;
    printf("%d", (p/5)+1);
    }
    else if(a%5==3){
    p=a-3;
    printf("%d", (p/5)+1);
    }
    else if(a%5==4){
    p=a-4;
    printf("%d", (p/5)+1);
    }
    return 0;
}