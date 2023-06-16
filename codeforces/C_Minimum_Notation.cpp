#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n = s.size();
        char mn = '9';
        for (int i = n-1; i >= 0; i--){
            if(s[i]<mn)
                mn=min(s[i], mn);
            else if(s[i]>mn && s[i]!='9')
                s[i]=s[i]+'1'-'0';
        }
        sort(s.begin(), s.end());
        cout<<s<<endl;
    }
    return 0;
}