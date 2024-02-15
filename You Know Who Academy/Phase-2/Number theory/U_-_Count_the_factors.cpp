/**
 *    author: A K M S Limon
 *    created: 10-February-2024  20:19:14
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1000000 + 9;
vector<int>spf(N+1);

void createSpf() {
    for(int i = 1; i<=N; i++) {
        spf[i]=i;
    }
    for(int i = 2; i<=N; i++) {
        for(int j = i; j<=N; j+=i) {
            spf[j]=min(spf[j], i);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    createSpf();
    int n; 
    while (cin >> n && n) {
        int cnt = 0;
        int ans = n;
        while (n > 1) {
            cnt++;
            int p = spf[n];
            while (n % p == 0) {
                n/= p;
            }
        }
        cout << ans << " : " << cnt << '\n'; 
    }
    return 0;
}