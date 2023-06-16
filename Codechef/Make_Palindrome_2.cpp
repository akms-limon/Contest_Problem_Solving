#include <bits/stdc++.h>
#define ll long long
#define yy cout << "YES" << endl
#define nn cout << "NO" << endl
#define nl "\n"
#define fl(i, a, n) for (int i = a; i < n; i++)
#define sp(n) fixed << setprecision(n)
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt_z=0, cnt_o=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0') cnt_z++;
            else cnt_o++;
        }
        char minn;
        if(cnt_z<=cnt_o) minn='0'; 
        else minn='1';
        for (int i =0; i < n; i++)
        {
            if(s[i]==minn) s[i]='a';
        }
        
        for (int i = 0; i < n; i++)
        {
            if(s[i] != 'a')
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}