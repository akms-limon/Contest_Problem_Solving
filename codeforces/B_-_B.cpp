/**
 *    author: A K M S Limon
 *    created: 18-October-2022  21:17:14
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
#define PI 2*acos(0.0)
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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int t; cin>>t;
        int p=1;
        while(t--) {
            cout<<"Case "<<p<<":"<<endl;
            string s; 
            string cur="http://www.lightoj.com/";
            string url;
            stack<string>back;
            stack<string>fr;
            while(cin>>s){
                if(s=="VISIT"){
                    back.push(cur);
                    cin>>url;
                    cur=url;
                    cout<<url<<endl;
                    stack<string>emty;
                    fr.swap(emty);
                }
                else if(s=="BACK"){
                    if(back.empty()){
                        cout<<"Ignored"<<endl;
                    }
                    else{
                        fr.push(cur);
                        cur=back.top();
                        cout<<cur<<endl;
                        back.pop();
                    }
                }
                else if(s=="FORWARD"){
                    if(fr.empty()){
                        cout<<"Ignored"<<endl;
                    }
                    else{
                        back.push(cur);
                        cur=fr.top();
                        cout<<cur<<endl;
                        fr.pop();
                    }
                }
                else if(s=="QUIT"){
                    break;
                }
            }
            p++;
        }
    return 0;
}