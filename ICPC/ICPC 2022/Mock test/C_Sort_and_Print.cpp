#include <bits/stdc++.h>
using namespace std;

bool sortbyfirst(const pair<int, pair<int, string>> &a, const pair<int, pair<int, string>>&b){
    return a.first>b.first;
}

vector< pair<int, pair<int, string>>> v;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 	int n; cin>>n;
 	map<int, pair<string, int>>m;
 	while(n--){
 		string s; 
 		int a, b; cin>>a>>s>>b;
 		m[a]=make_pair(s, b);
    }
    for(auto it : m){
        v.push_back(make_pair(it.second.second, make_pair(it.first, it.second.first)));
    }
    sort(v.begin(), v.end(), sortbyfirst);
    cout<<"Roll | Name       | Marks"<<'\n';
    cout<<"-------------------------"<<'\n';
    for(auto it : v){
        if(it.second.first<10){
            cout<<"   "<<it.second.first<<" | "<<it.second.second;
            int si = it.second.second.size();
            for(int i = 0; i<11-si; i++){
                cout<<' ';
            
            }
            cout<<"| "<<it.first<<'\n';
        }
        else{
            cout<<"  "<<it.second.first<<" | "<<it.second.second;
            int si = it.second.second.size();
            for(int i = 0; i<11-si; i++){
                cout<<' ';
            
            }
            cout<<"| "<<it.first<<'\n';
        }
    }
    return 0;
}	