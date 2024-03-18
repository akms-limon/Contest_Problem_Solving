/**
 *    author: A K M S Limon
 *    created: 03-March-2024  01:10:46
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector<int> v(n + 1);
    int ab, bc, ac;
    cout << "? " << 1 << " " << 2 << endl;
    cin >> ab;
    cout << "? " << 2 << " " << 3 << endl;
    cin >> bc;
    cout << "? " << 1 << " " << 3 << endl;
    cin >> ac;
    int c = ac - ab;
    int b = bc - c;
    int a = ac - b - c;
    v[1] = a, v[2] = b, v[3] = c;
    for (int i = 3; i < n; i++) {
        cout << "? " << i << " " << i + 1 << endl;
        int x; cin >> x;
        v[i + 1] = x - v[i];
    }
    cout << "! ";
    for (int i = 1; i <= n; i++) {
        cout << v[i] << ' ';
    }
    cout << endl;
    return 0;
}