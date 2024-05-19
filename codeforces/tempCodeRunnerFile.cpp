/**
 *    author: A K M S Limon
 *    created: 19-May-2024  22:51:48
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<int> a, b; 
    int x; 
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++) {
        cin >> x; 
        b.push_back(x);
    }
    for (int i = 0; i < a.size(); i++) {
        cout <<  a[i] << ' ';
    }
    cout << '\n';
    for (int i = 0; i < b.size(); i++) {
        cout <<  b[i] << ' ';
    }
    cout << '\n';
    swap(a, b);
    for (int i = 0; i < a.size(); i++) {
        cout <<  a[i] << ' ';
    }
    cout << '\n';
    for (int i = 0; i < b.size(); i++) {
        cout <<  b[i] << ' ';
    }
    cout << '\n';
    return 0;
}