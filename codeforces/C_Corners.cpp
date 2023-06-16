/**
 *    author: A K M S Limon
 *    created: 10-October-2022  15:38:10
**/
#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n, m; cin>>n>>m;
        string s[n];
        for (int i = 0; i < n; i++) cin>>s[i];
        int c=0;
        int n1=0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(s[i][j]=='1') n1++;
            }
            
        } 
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(s[i][j]=='0'){
                    c=1;
                    for (int k = i-1; k <= i+1; k++){
                        for (int l = j-1; l <= j+1; l++){
                            if(k>=0 && k<n && l>=0 && l<m && !(k==i && l==j) && s[k][l]=='0') {
                                c=2;
                                goto here;
                            }
                        }
                        
                    }
                    
                }
            }
            
        }
        here : 
        cout<<n1-(2-c)<<endl;
    }
    return 0;
}