#include<bits/stdc++.h>
#define ll long long
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
#define nl "\n"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int date;
        string m;
        cin >> date >> m;

        if (m == "Jan")
        {
            if (date <= 20)
                cout << "Capricorn" << nl;
            else
                cout << "Aquarius" << nl;
        }
        else if (m == "Feb")
        {
            if (date <= 19)
                cout << "Aquarius" << nl;
            else
                cout << "Pisces" << nl;
        }
        else if (m == "Mar")
        {
            if (date <= 20)
                cout << "Pisces" << nl;
            else
                cout << "Aries" << nl;
        }
        else if (m == "Apr")
        {
            if (date <= 20)
                cout << "Aries" << nl;
            else
                cout << "Taurus" << nl;
        }
        else if (m == "May")
        {
            if (date <= 20)
                cout << "Taurus" << nl;
            else
                cout << "Gemini" << nl;
        }
        else if (m == "Jun")
        {
            if (date <= 21)
                cout << "Gemini" << nl;
            else
                cout << "Cancer" << nl;
        }
        else if (m == "Jul")
        {
            if (date <= 22)
                cout << "Cancer" << nl;
            else
                cout << "Leo" << nl;
        }
        else if (m == "Aug")
        {
            if (date <= 22)
                cout << "Leo" << nl;
            else
                cout << "Virgo" << nl;
        }
        else if (m == "Sep")
        {
            if (date <= 21)
                cout << "Virgo" << nl;
            else
                cout << "Libra" << nl;
        }
        else if (m == "Oct")
        {
            if (date <= 22)
                cout << "Libra" << nl;
            else
                cout << "Scorpio" << nl;
        }
        else if (m == "Nov")
        {
            if (date <= 22)
                cout << "Scorpio" << nl;
            else
                cout << "Sagittarius" << nl;
        }
        else
        {
            if (date <= 21)
                cout << "Sagittarius" << nl;
            else
                cout << "Capricorn" << nl;
        }
    }
    return 0;
}