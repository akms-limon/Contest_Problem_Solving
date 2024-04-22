/**
 *    author: A K M S Limon
 *    created: 08-April-2024  20:39:20
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, a, b; cin >> n >> a >> b;
        int temp = a * 2;
        if (temp < b) {
            cout << n * a << '\n';
        }
        else {
            if (n % 2) 
            cout << (n / 2) * b + a << '\n';
            else 
            cout << (n / 2) * b << '\n';
        }
    }
    return 0;
}