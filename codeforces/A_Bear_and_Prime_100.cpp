/**
 *    author: A K M S Limon
 *    created: 02-March-2024  23:31:49
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<int> v{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int cnt = 0;
    for (int i = 0; i < 15; i++) {
        cout << v[i] << endl;
        string s; cin >> s;
        if (s == "yes") {
            cnt++;
            int temp = 100 / v[i];
            for (int j = 0; v[j] < temp && j < 15; j++) {
                if (i == j)
                    cout << v[j] * v[j] << endl;
                else 
                    cout << v[j] << endl;
                cin >> s; 
                if (s == "yes") {
                    cnt++;
                    goto here;
                }
            }
            break;
        }
    }
    here :
    if (cnt > 1) cout << "composite" << endl;
    else cout << "prime" << endl;
    return 0;
}