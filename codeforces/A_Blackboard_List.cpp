/**
 *    author: A K M S Limon
 *    created: 04-June-2023  21:04:48
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
        int b[n], a[n];
        for (int i = 0; i < n; i++){
            cin>>b[i];
            a[i]=b[i];
        }
        int ind;
        for (int i = 0; i < n; i++) {
            if(a[i]==1) ind = i;
        }
        sort(a, a+ind);
        reverse(a, a+ind);
        sort(a+ind, a+n);

        if(ind>0 && a[ind-1]==2){
            int mx=INT_MIN, mxin;
            for (int i = 0; i < ind; i++) {
                if(b[i]>mx) {
                    mx = max(mx, b[i]);
                    mxin = i;
                }
            }
            if(ind+1<n && mx==ind+1) cout<<ind<<' '<<ind+1<<'\n';
            else cout<<mxin+1<<' '<<ind<<'\n';
        }
        else {
            int mx=INT_MIN, mxin, cnt = 0;
            for (int i = ind+1; i < n; i++) {
                if(b[i]>mx) {
                    mx = max(mx, b[i]);
                    mxin = i;
                }
                cnt++;
            }
            if(ind>0 && mx==cnt+1) cout<<ind+1<<' '<<ind<<'\n';
            else cout<<ind+2<<' '<<mxin+1<<'\n';
        }
        


        // int n; cin>>n;
        // int b[n], a[n];
        // for (int i = 0; i < n; i++){
        //     cin>>b[i];
        //     a[i]=b[i];
        // }
        // int ind, mx=INT_MIN, mxin, next = n-1;
        // for (int i = 0; i < n; i++) {
        //     if(a[i]==1) ind = i;
        //     if(a[i]>mx){
        //         mx = max(a[i], mx); 
        //         mxin = i;
        //     }
        //     if(a[i]==n-1) next = i;
        // }
        // sort(a, a+ind);
        // reverse(a, a+ind);
        // sort(a+ind, a+n);
        // int ans;
        // if(ind>0 && a[ind-1]==2) ans = ind -1;
        // else if(ind<n-1 && a[ind+1]==2) ans = ind+1;
        // swap(b[ans], b[mxin]);
        // if((ind>0 && b[ind-1]==2) || (ind<n-1 && b[ind+1]==2)) cout<<ind+1<<' '<<mxin+1<<'\n';
        // else cout<<ans+1<<' '<<mxin+1<<'\n';
    }
    return 0;
}