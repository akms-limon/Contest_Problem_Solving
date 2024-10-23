/*
 Author = Risan Mahfuz..
*/
#include <bits/stdc++.h>
using namespace std;
#define run_fast                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define el "\n"
#define ll long long int
#define flp(i, a, n) for (ll i = a; i < n; i++)
#define flr(i, a, n) for (ll i = a; i >= n; i--)
#define yss cout << "YES\n"
#define noo cout << "NO\n"
#define F first
#define S second
#define endc return 0
ll mod = 1000000007;

<<<<<<< HEAD
int main(){
	int n; cin>>n;
	return 0;
}
=======
int main()
{
    run_fast;
    ll tc;
    cin >> tc;
    for (int cs = 1; cs <= tc; cs++)
    {
        ll n;
        cin >> n;
        int x;
        ll temp = 2 * n;
        string s = "";
        char ch = '0';
        bool k = 0;
        ll cnt = 1;
        while (s.size() < n)
        {	
			cout << s.size() << ' ' << s << ' ' << n << endl;
            if (k)
                cout << "? " << ch + s << endl;
            else
                cout << "? " << s + ch << endl;
            cin >> x;
            if (k == 0)
            {
                if (x == 1) {
                    cnt = 1;
                    s.push_back(ch);
					cout << s << '\n';
                }
                else
                {
                    if (ch == '1')
                        ch = '0';
                    else
                        ch = '1';
                    cnt++;
					if (cnt == 2) {
						k = 1;
					}
                }
            }
            else
            {
                if (x == 1)
                {
                    s = ch + s;
                }
                else
                {
                    if (ch == '1')
                        ch = '0';
                    else
                        ch = '1';
                    cnt++;
                }
            }
        }
        cout << "! " << s << endl;
    }
    endc;
}
>>>>>>> a0179cd2126338ceab37e0095e576bafdacfbc09
