#include <cstdio>
#include <cstring>

using namespace std;

int main(){

    int l = 1, h = 1e6, mid;
    while(l!=h){
        mid = (l+h+1)/2;
        printf("%d\n", mid);
        fflush(stdout);
        char s[3]; 
        scanf("%s", s);
        if(strcasecmp(s, "<")==0){
            h = mid - 1;
        }
        else {
            l = mid;
        }
    }
    printf("! %d\n", l);
    fflush(stdout);
    return 0;
}