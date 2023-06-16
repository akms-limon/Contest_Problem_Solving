/**
 *    author: A K M S Limon
 *    created: 13-March-2023  15:17:08
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

bool issorted(deque<int>&dq){
    bool b = true;
    for (int i = 0; i < dq.size()-1; i++) {
        if(dq[i]>dq[i+1]){
            b = false;
        }
    }
    return b; 
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        tc{
            int n; cin>>n; 
            deque<int>q, dq;
            int a; 
            for (int i = 0; i < n; i++) {
                cin>>a;
                q.push_back(a);
            }
            for (int  i = 0; i < n; i++) {
                cin>>a;
                dq.push_back(a);
            }
            bool b = true;
            for (int i = 0; i < n-1; i++) {
                if(!((q[i]>q[i+1] && dq[i]>dq[i+1]) || (q[i]<q[i+1] && dq[i]<dq[i+1])))
                b=false;
            }
                deque<pair<int, int>>ans;
                int initialize = 0;
                for (int i = initialize; i < n; i++) {
                    int mn = INT_MAX, index;
                    for (int j = i+1; j < n; j++) {
                        if(q[j]<=mn){
                            mn = q[j];
                            index = j;
                        }
                    }
                    if(q[i]>mn){
                        ans.push_back(make_pair(index, i));
                        swap(q[index], q[i]);
                        swap(dq[index], dq[i]);
                    }
                }
                initialize = 0; 
                for (int i = initialize; i < n; i++) {
                    int mn = INT_MAX, index;
                    for (int j = i+1; j < n; j++) {
                        if(dq[j]<=mn){
                            mn = dq[j];
                            index = j;
                        }
                    }
                    if(dq[i]>mn){
                        ans.push_back(make_pair(index, i));
                        swap(dq[index], dq[i]);
                        swap(q[index], q[i]);
                    }
                }
                if(q.size()==0) cout<<0<<endl;
                else if(issorted(q) && issorted(dq)) {
                    cout<<ans.size()<<endl;
                    for (int i = 0; i < ans.size(); i++)
                    {
                        cout<<ans[i].first+1<<' '<<ans[i].second+1<<endl;
                    }
                }
                else cout<<-1<<endl;
        }
    return 0;
}