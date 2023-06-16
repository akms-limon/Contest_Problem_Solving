#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, z, t, s, m;
    cin >> a >> b >> c;
    x = a + (b * c);
    y = a * (b + c);
    z = a * b * c;
    t = (a + b) * c;
    s = a + b + c;
    m = (a * b) + c;
    
    cout<<max({x, y, z, t, s, m})<<endl;


    return 0;
}
