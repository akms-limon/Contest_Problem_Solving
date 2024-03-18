#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __bultin_popcount(x)
#define zerobits(x) __bultin_ctzll(x) // gives number of zerobits from left before 1
#define mod 1000000007
#define inf 1e18
#define sp(x, y) fixed << setprecision(y) << x // x upto y decimal places
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int t;    \
    cin >> t; \
    while (t--)

int power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num1, num2, limit;
        cin >> num1 >> num2 >> limit;
        set<int> divisors;
        for (int i = 0;; i++)
        {
            int value1 = power(num1, i);
            if (value1 > limit)
                break;
            for (int j = 0;; j++)
            {
                int combinedValue = value1 * power(num2, j);
                if (combinedValue > limit)
                    break;
                if (limit % combinedValue == 0)
                {
                    divisors.insert(limit / combinedValue);
                }
            }
        }
        cout << divisors.size() << endl;
    }
    return 0;
}