/**
 *    author: A K M S Limon
 *    created: 19-May-2024  14:43:40
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e3;

vector<int> g[N];
int vis[N];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    for (int i = 0; i < 5; i++) {
        cout << g[i] << ' ';
    }
    return 0;
}