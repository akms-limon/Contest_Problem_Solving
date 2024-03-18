/**
 *    author: A K M S Limon
 *    created: 06-March-2024  14:37:18
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int a[n];
    cout << "? " << 1 << ' ' << 2 << endl;
    int x, y, z; cin >> x;
    cout << "? " << 2 << ' ' << 3 << endl;
    cin >> y;
    cout << "? " << 1 << ' ' << 3 << endl;
    cin >> z;
    a[0] = ((x + z) - y) / 2;
    a[1] = x - a[0];
    a[2] = z - a[0];
    for (int i = 3; i < n; i++) {
        cout << "? " << 1 << ' ' << i + 1 << endl;
        int x; cin >> x;
        a[i] = x - a[0];
    }
    cout << "! ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}