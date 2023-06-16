/**
 *    author: A K M S Limon
 *    created: 30-March-2023  01:53:25
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(1);
    for (auto it : s) {
        cout<<it<<' ';
    }
    return 0;
}