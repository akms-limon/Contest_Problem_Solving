/**
 *    author: A K M S Limon
 *    created: 25-March-2023  04:12:45
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
            ll n; cin>>n;
            vector<ll>v;
            while(n>0){
                v.push_back(n%3);
                n/=3;
            }
            rvs(v);
            int two=INT_MAX;
            for (int i = 0; i < v.size(); i++) {
                if(v[i]==2) {
                    two = i;
                    break;
                }
            }
            for (int i = two; i < v.size(); i++) {
                if(two!=INT_MAX) v[i]=0;
            }
            bool ok = false;
            int oki=INT_MAX;
            for (int i = v.size()-1; i>=0; i--) {
                if(two!=INT_MAX){
                    if(i<two && v[i]==0 && two){
                        v[i]=1; ok = true; 
                        oki=i;
                        break;
                    }
                }
            }
            for (int i = oki+1; i < v.size(); i++) {
                v[i]=0;
            }
            if(!ok && two!=INT_MAX){
                v[0]=1;
                for (int i = 1; i < v.size(); i++) {
                    v[i]=0;
                }
                v.push_back(0);
            }
            ll ans = 0, three=1;
            for (int i = v.size()-1; i >=0; i--) {
                ans+=v[i]*three;
                three*=3;
            }
            cout<<ans<<nl;
        }
    return 0;
}