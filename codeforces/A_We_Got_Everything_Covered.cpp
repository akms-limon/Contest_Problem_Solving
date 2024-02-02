/**
 *    author: A K M S Limon
 *    created: 30-January-2024  00:44:55
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        for (int i = 0; i < a; i++) {
            char ch = 'a';
            for (int j = 0; j < b; j++) {
                cout << ch;
                ch++;
            }
        }
        cout << '\n';
    }
    return 0;
}