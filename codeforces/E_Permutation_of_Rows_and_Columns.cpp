#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define tc int t; cin>>t; while(t--)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        int n, m; cin >> n >> m;
        int a[n][m], b[n][m];
        int row1, row2, col1, col2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] == 1) {
                    row1 = i;
                    col1 = j;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> b[i][j];
                if (b[i][j] == 1) {
                    row2 = i;
                    col2 = j;
                }
            }
        }
        map<int,vector<int>> mp1;
        for (int i = 0; i < m; i++) {
            vector<int> temp;
            for (int j = 0; j < n; j++) {
                if (j != row1) {
                    temp.push_back(a[j][i]);
                }
            }
            sort(temp.begin(), temp.end());
            mp1[a[row1][i]] = temp;
        }
        map<int,vector<int>> mp2;
        for (int i = 0; i < m; i++) {
            vector<int> temp;
            for (int j = 0; j < n; j++) {
                if (j != row2) {
                    temp.push_back(b[j][i]);
                }
            }
            sort(temp.begin(), temp.end());
            mp2[b[row2][i]] = temp;
        }
        bool bl = true;
        for (auto it : mp1) {
            if (mp1[it.first] != mp2[it.first]) {
                bl = false;
            }
        }
        map<int,vector<int>> mp3;
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j < m; j++) {
                if (j != col1) {
                    temp.push_back(a[i][j]);
                }
            }
            sort(temp.begin(), temp.end());
            mp3[a[i][col1]] = temp;
        }
        map<int,vector<int>> mp4;
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j < m; j++) {
                if (j != col2) {
                    temp.push_back(b[i][j]);
                }
            }
            sort(temp.begin(), temp.end());
            mp4[b[i][col2]] = temp;
        }
        bool bl2 = true;
        for (auto it : mp3) {
            if (mp3[it.first] != mp4[it.first]) {
                bl = false;
            }
        }
        if (bl && bl2) yes;
        else no;
    }
    return 0;
}