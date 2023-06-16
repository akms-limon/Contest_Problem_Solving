#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define forn(i,n) for(int i=0;i<int(n);i++)
void sum()
{
   ll n,freq=0; scanf("%lld",&n); while(n--)
    {
     ll x; scanf("%lld",&x); int y=sqrt(x);
     for(int i=2;i<=y ;i++)
      {
        if(x%i==0) freq++;
      }
      if(freq==0 && x!=1) printf("YES\n"); else printf("NO\n");
    }
    
}
int main()
{
    sum(); return 0;
}