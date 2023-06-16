/**
 *    author: A K M S Limon
 *    created: 12-March-2023  10:23:52
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
            int n; cin>>n;
            string s; cin>>s; 
            bool a = false, b = false;
            int z=-1, o=INT_MAX;
            for (int i = n-1; i >= 0; i--) {
                if(s[i]=='0' && a==false){
                    a = true;
                    z = i;
                }
                if(s[i]=='1'){
                    o = i;
                }
            }
            if(o>z) cout<<s<<endl;
            else {
                string ss; 
                for (int i = 0; i < o; i++) {
                    ss.push_back(s[i]);
                }
                for (int i = z; i < s.size(); i++)
                {
                    ss.push_back(s[i]);
                }
                cout<<ss<<endl;
            }
            
        }
    return 0;
}