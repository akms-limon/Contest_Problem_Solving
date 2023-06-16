/**
 *    author: A K M S Limon
 *    created: 18-March-2023  10:15:27
 **/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int lo = 0, hi = 1e7, mid;
    while (lo < hi)
    {
        mid = (lo + hi + 1) / 2;
        int ans = a / mid + b / mid;
        if (ans >= n && a/mid>0 && b/mid>0)
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << lo << endl;
    return 0;
}