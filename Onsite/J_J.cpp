#include <bits/stdc++.h>
using namespace std;
int getNext(int n)
{
    int c = n;
    int c0 = 0;
    int c1 = 0;
    while (((c & 1) == 0) && (c != 0)) {
        c0 ++;
        c >>= 1;
    }
    while ((c & 1)==1) {
        c1++;
        c >>= 1;
    }
    if (c0 +c1 == 31 || c0 +c1== 0)
        return -1;
    int p = c0 + c1;
    n |= (1 << p);
    n &= ~((1 << p) - 1);
    n |= (1 << (c1 - 1)) - 1;
    return n;
}

int main() {
    
    int t; cin>>t;
    for(int i = 0; i<t; i++){
        int n; cin>>n; 
        cout<<"Case "<<i+1<<": "<<getNext(n)<<'\n';
    }
    return 0;
}