/**
 *    author: A K M S Limon
 *    created: 26-March-2025  00:26:15
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 10000000;
vector <int> v;
bool vis[N];

void Sieve()  //From masum vai : use this when N is big but other constrains is small 
{
    vis[1]=true;
    v.push_back(2);
    for(int i=3;i<N;i+=2)
    {
        if(vis[i]) continue;
        v.push_back(i);
        for(int j=i*3;j<N;j+=i*2)   
        vis[j]=true;
    }
}


int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  Sieve();
  int t; cin >> t;
  while (t--) {
    ll n; cin >> n;
    ll ans = 0;
    for (int i = 0; i < v.size(); i++) {
      if (v[i] > n) {
        break;
      }
      ans += n / v[i];
    }
    cout << ans << '\n';
  }
  return 0;
}