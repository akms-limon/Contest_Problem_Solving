#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n=6;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1) cnt1++;
        else if(arr[i]==2) cnt2++;
        else if(arr[i]==3) cnt3++;
        else if(arr[i]==4) cnt4++;
    }
    vector<int>v;
    v.push_back(cnt1);
    v.push_back(cnt2);
    v.push_back(cnt3);
    v.push_back(cnt4);
    sort(v.begin(), v.end());
    if(v[0]==1 && v[1]==1 && v[2]==2 && v[3]==2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}