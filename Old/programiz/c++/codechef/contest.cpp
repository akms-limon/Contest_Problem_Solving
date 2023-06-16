#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x; cin>>n>>x;
        if((n%2==1) && (x%2==0)) cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
	return 0;
}
