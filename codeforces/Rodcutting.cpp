/**
 *    author: A K M S Limon
 *    created: 02-May-2023  11:44:14
**/
#include <bits/stdc++.h>
using namespace std;

vector<int>mem;

int cut(int price[], int length){

}
int main() {
    int n; cin>>n;
    int price[n];
    for (int i = 0; i < n; i++) {
        cin>>price[i];
    }
    mem.resize(n+1, INT_MAX);
    mem[0]=0;
    int ans = cut(price, n);
    cout<<ans<<endl;
    return 0;
}