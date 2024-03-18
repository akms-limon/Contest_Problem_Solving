/**
 *    author: A K M S Limon
 *    created: 06-March-2024  11:12:35
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a[] = {4, 8, 15, 16, 23, 42};
    map<int, int> mp;
    for (int i = 0; i < 5; i++) {
        mp[a[i]]++;
    }
    map<int, pair<int, int>> m;
    for(int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            int x = a[i] * a[j];
            m[x] = make_pair(a[i], a[j]);
        }
    }
    int ans = 4 * 8 * 15 * 16 * 23 * 42;
    cout << "? " << 1 << ' ' << 2 << endl;
    int x, one, two, three, four, five, six, comon; 
    cin >> x;
    one = m[x].first;
    two = m[x].second;
    cout << "? " << 2 << ' ' << 3 << endl;
    cin >> x; 
    three = m[x].first;
    four = m[x].second;
    if (three == one || three == two) {
        comon = three;
    }
    else comon = four;
    one = (one + two) - comon;
    two = comon;
    three = (three + four) - comon;
    cout << "? " << 4 << ' ' << 4 << endl;
    cin >> four;
    cout << "? " << 5 << ' ' << 5 << endl;
    cin >> five;
    four = sqrt(four);
    five = sqrt(five);
    cout << "! " << one << ' ' << two << ' ' << three << ' ' << four << ' ' << five << ' ' << (ans) / (one * two * three * four * five) << endl;
    return 0;
}