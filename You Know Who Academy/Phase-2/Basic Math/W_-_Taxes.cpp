/**
 *    author: A K M S Limon
 *    created: 24-February-2024  02:07:08
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    bool bl = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            bl = false;
        }
    }
    if (bl) cout << 1 << '\n';
    else {
        if (n % 2 == 0) cout << 2 << '\n';
        else {
            int x = true;
            n -= 2;
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    x = false;
                }
            }   
            if (x) cout << 2 << '\n';
            else cout << 3 << '\n';
        }
    }
    return 0;
}