#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0, s, n, x;
    cin >> s >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n-1; i++)
    {
        x = arr[i + 1] - arr[i] - 1;

        if (x > 2)
        {
            if (!(x & 1))
            x -= 1;
            ans += x / 2;
        }
    }

    x = s - (arr[n - 1] - arr[0]) - 1;

    if (x > 2)
    {
        if (!(x & 1))
            x -= 2;
        ans += x / 2;
    }

    cout<<ans<<endl;

    return 0;
}