/**
 *    author: A K M S Limon
 *    created: 29-April-2024  19:04:59
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int req = 3, l = 0, r = 0, m = 1;
    for (int i = 0; i < 32; i++) {
        for (ll j = 0; j < m; j++) {
            if ((req >> i) & 1) {
                cout << req << ' ';
                l++;
                r--;
            }
        }
    }
    return 0;
}