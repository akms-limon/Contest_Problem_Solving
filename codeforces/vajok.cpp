#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n; cin>>t;
    while (t--)
    {
        cin>>n;
        int a = sqrt(n);
        for (int i = 1; i <= n; i++)
        {
            if(n%i==0)
            cout<< i<<endl;
        }
    }
    return 0;
}