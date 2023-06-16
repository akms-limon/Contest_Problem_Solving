/**
 *    author: A K M S Limon
 *    created: 08-March-2023  17:18:46
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

void strr(string s, string s1){
            if(s[0]==s1[0]){
                yes; cout<<s[0]<<'*'<<endl;
                return;
            }
            else if(s[s.size()-1]==s1[s1.size()-1]){
                yes; cout<<'*'<<s1[s1.size()-1]<<endl;
                return;
            }
            else {
                for (int i = 0; i < s.size()-1; i++)
                {
                    for (int j = 0; j < s1.size()-1; j++)
                    {
                        if(s[i]==s1[j]){
                            if(s[i+1]==s1[j+1]){
                                yes; cout<<"*"<<s[i]<<s[i+1]<<"*"<<endl;
                                return;
                            }
                        }
                    }
                }
            }
            no;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        tc{
            string s, s1; cin>>s>>s1;
            strr(s, s1);
        }
    return 0;
}