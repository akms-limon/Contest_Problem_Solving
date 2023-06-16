/**
 *    author: A K M S Limon
 *    created: 11-March-2023  01:15:41
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
            ll a[n]; cinx(a);
            ll sum =  0;
            sumx(a, sum);
            double k = (sum*1.0L)/n;
            double target = sum*1.0L - k*(n-2);
            sort(a, a+n);
            ll i = 0, j = n-1, cnt = 0, aj=0, ai=0;
            while(i<j){
                if(a[i]+a[j]==target){
                    ai = 1, aj = 1;
                    while(a[i]==a[i+1]){
                        ai++; i++;
                    }
                    while(a[j]==a[j-1] && i<j){
                        aj++; j--;
                    }
                    if(a[i]==a[j]) cnt+=(ai*(ai-1))/2;
                    else cnt+=(ai*aj);
                    i++, j--;
                }
                else if(a[i]+a[j]>target) j--;
                else i++;
            }
            cout<<cnt<<endl;
        }
    return 0;
}