#include<bits/stdc++.h>
using namespace std;
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }

 
int main() {
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int test; cin>>test;
 
	while (test--) {
	
		int n; cin>>n;
		int p[n];
		
		for (int i = 0; i < n; i++){
			cin>>p[i];
		}
 
		int x = 0;
 
		for (int i = 0; i < n; i++) x ^= p[i];
 
		if(x == 0){
 
		  cout<<"YES\n"; 
		  continue;
		}
 
		for (int i = 1; i < n; i++){
 
			p[i] = p[i - 1] ^ p[i];
		}
		bool check = false;
		int d, b, c;
		for (int i = 0; i < n - 2; i++){
 
			for (int j = i + 1; j < n-1; j++){
                d = p[i];
				b = p[i] ^ p[j];
				c = p[j] ^ p[n-1];
 
				if (d == b && b == c){
 
				   check = true; 
				   break;
				}
			}
		}
 
		if (check) cout<<"YES\n";
		else cout<<"NO\n";
 
	}
 
	return 0;
 
}	