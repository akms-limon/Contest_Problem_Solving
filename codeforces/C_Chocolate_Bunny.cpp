/**
 *    author: A K M S Limon
 *    created: 06-March-2024  15:23:07
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int max = 1;
    int a[n + 1];
    for (int i = 2; i <= n; i++) {
        cout << "? " << max << " " << i << endl;
        int x; cin >> x;
        cout << "? " << i << " " << max << endl;
        int y; cin >> y;
        if (x > y) {
            a[max] = x;
            max = i;
        }
        else {
            a[i] = y;
        }
    }
    a[max] = n;
    cout << "! ";
    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}