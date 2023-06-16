/**
 *    author: A K M S Limon
 *    created: 09-October-2022  21:37:21
**/
#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;
        string s; cin>>s; 
        vector<int>v(26);
        for(char c : s){
            v[(int) (c-'a')]++;
        }
        char c; string s1;
        for (int i = 0; i < k; i++){
            int cnt = 0;
            while(cnt < n/k && v[cnt] > 0){
                v[cnt]--;
                cnt++;
            }
            s1+= char (cnt+'a');
        }
        cout<<s1<<endl;
    }
    return 0;
}