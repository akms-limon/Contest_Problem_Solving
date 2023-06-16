#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
  int T; cin>>T;
  while (T--){
    int N,X;
    cin>>N>>X;
    int far=0; 
    bool b = false;
    for (int i=0;i<N;i++){
      int A;
      cin>>A;
      if(A==X) b = true;
      far=max(far,A);
    }
    int mx;
    if (b) 
      cout<<1<<endl;
    else{
        if(X%far==0) mx = X/far;
        else mx = (X/far)+1;
        cout<<max(2,mx)<<endl;
    }
  }
}