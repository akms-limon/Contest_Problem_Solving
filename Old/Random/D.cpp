#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"

void isprime(int x, vector<int>v)
{
    while(!(x%2))
    {
        v.push_back(2);
        x=x/2;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);


    return 0;
}