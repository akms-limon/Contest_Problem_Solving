#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    for(int tc = 1; tc <= t; tc++){
        cout<<"Case #"<<tc<<": ";
        string s1,s2;
        cin>>s1>>s2;
        if(s1.length() < s2.length() ){
            swap(s1,s2);
        }
        vector<int> v;
        int j = s2.length()-1;
        int r = 0;
        for(int i=s1.length()-1; i>=0; i--){
            int a = s1[i] - '0';
            int b = 0;
            if(j >= 0)
                b = s2[j] - '0';
            j--;
            int sum = a+b+r;
            int p = sum % 10;
            v.push_back(p);
            r = sum / 10;
        }
        if(r) v.push_back(r);
        reverse(v.begin(), v.end());
        
        for(int i=0; i<v.size(); i++){
            cout<<v[i];
        }
        nll;
    }
    

    return 0;
}