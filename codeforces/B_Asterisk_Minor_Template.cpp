/**
 *    author: A K M S Limon
 *    created: 28-February-2023  21:31:10
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
#define flit(v) for(auto it=v.begin(); it!=v.end(); it++)
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
#define sumx(array,sum) { for (auto x: array) sum+=x;  }
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        tc{
            string s, ss, final; cin>>s>>ss;
            int ok = 0;
            if(s[0]==ss[0]) {
                yes;
                cout<<s[0]<<"*"<<endl;
            }
            else if(s[s.size()-1]==ss[ss.size()-1]) {
                yes;
                cout<<'*'<<s[s.size()-1]<<endl;
            }
            else{
                for (int i = 0; i < s.size()-1; i++)
                {
                    string temp;
                    temp.push_back(s[i]);
                    temp.push_back(s[i+1]);
                    for (int j = 0; j < ss.size()-1; j++)
                    {
                        string t;
                        t.push_back(ss[j]);
                        t.push_back(ss[j+1]);
                        if(temp==t) {
                            final = t;
                            ok = 1;
                            break;
                        }
                    }
                    if(ok) break;
                }
                if(ok) {
                    yes;
                    cout<<"*"<<final<<'*'<<endl;
                }
                else no;
            }
        }
    return 0;
}