/**
 *    author: A K M S Limon
 *    created: 12-June-2023  21:27:42
**/
#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define tc int t; cin>>t; while(t--)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rvs(v) reverse(v.begin(), v.end())
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 3.14159
#define pii pair<int,int>
#define dbg(x) cerr<<x<<"\n"
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define fl(i,a,b) for(int i = a; i <= b; i++)
#define fll(i,a,b) for(int i = a; i >= b; i--)
#define ff first
#define ss second
#define flit(v) for(auto it=v.begin(); it!=v.end(); it++)
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
#define sumx(array,sum) { for (auto x: array) sum+=x;  }
using namespace std;

int isSubstring(string s, string sub) {
    if (s.find(sub) != string::npos)
       return s.find(sub);
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        string s, temp, ss; cin>>temp;
        ll ans, ind, a=1, b=10, c=100, d=1000, e=10000, mx = INT_MIN;
        for (int i = 0; i < temp.size(); i++) {
            for (int j = 0; j < 5; j++) {
                s=temp;
                s[i]=j+'A';
                ans = 0;
                int k=0;
                for (k = 0; k < s.size()-1; k++) {
                    if(s[k]=='A'){
                        if(s[k+1]<s[k])
                        ans+=a;
                        else ans-=a;
                    } 
                    else if(s[k]=='B'){
                        if(s[k+1]<s[k])
                        ans+=b;
                        else ans-=b;
                    } 
                    else if(s[k]=='C'){
                        if(s[k+1]<s[k])
                        ans+=c;
                        else ans-=c;
                    } 
                    else if(s[k]=='D'){
                        if(s[k+1]<s[k])
                        ans+=d;
                        else ans-=d;
                    } 
                    else if(s[k]=='E'){
                        if(s[k+1]<s[k])
                        ans+=e; 
                        else ans-=e;
                    } 
                }
                    if(s[k]=='A'){
                        ans+=a;
                    } 
                    else if(s[k]=='B'){
                        ans+=b;
                    } 
                    else if(s[k]=='C'){
                        ans+=c;
                    } 
                    else if(s[k]=='D'){
                        ans+=d;
                    } 
                    else if(s[k]=='E'){
                        ans+=e;
                    } 
                if(ans>mx) {
                    mx = ans; 
                    ss = s;
                }
            }
        }
        cout<<mx<<' '<<ss<<'\n';
    }
    return 0;
}