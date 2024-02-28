#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
// clang-format off
#define nl "\n"
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define testCase(x) int x; cin >> x; while (x--)
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

bool isLeapYear(int year) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return true;
    else
        return false;
}

int getDaysInMonth(int month, int year) {
    switch (month) {
        case 2:
            return isLeapYear(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

int getFirstDayIndex(int day, int month, int year) {
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 3;
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

int main() {
    FIO;

    int T;
    cin >> T;

    while (T--) {
        string date, dayName;
        int day, month, year;
        cin >> date >> dayName;

        stringstream ss(date);
        char c;
        ss >> day >> c >> month >> c >> year;

        int firstDayIndex = getFirstDayIndex(1, month, year);

        int daysInMonth = getDaysInMonth(month, year);
        int days[5][7] = {0};

        int currentDay = 1;
        for (int week = 0; week < 5; ++week) {
            for (int i = (week == 0 ? firstDayIndex : 0); i < 7; ++i) {
                if (currentDay > daysInMonth) break;
                days[week][i] = currentDay;
                currentDay++;
            }
            if (currentDay > daysInMonth) break;
        }
        for (int i = 0; i < firstDayIndex; i++) {
            if (currentDay > daysInMonth) break;
            days[0][i] = currentDay;
            currentDay++;
        }

        if (month == 2 && firstDayIndex == 0 && !isLeapYear(year)) {
            cout << "|---------------------------|\n";
            cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|\n";
            cout << "|---------------------------|\n";
            for (int week = 0; week < 4; ++week) {
                cout << "|";

                for (int day = 0; day < 7; ++day) {
                    if (days[week][day] == 0) {
                        cout << " - |";
                    } else {
                        if (days[week][day] <= 9) {
                            cout << "  " << days[week][day] << "|";

                        } else {
                            cout << " " << days[week][day] << "|";
                        }
                    }
                }
                cout << "\n|---------------------------|\n";
            }
            cout << nl;
            continue;
        }

        cout << "|---------------------------|\n";
        cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|\n";
        cout << "|---------------------------|\n";
        for (int week = 0; week < 5; ++week) {
            cout << "|";

            for (int day = 0; day < 7; ++day) {
                if (days[week][day] == 0) {
                    cout << " - |";
                } else {
                    if (days[week][day] <= 9) {
                        cout << "  " << days[week][day] << "|";

                    } else {
                        cout << " " << days[week][day] << "|";
                    }
                }
            }
            cout << "\n|---------------------------|\n";
        }
        cout << nl;
    }

    return 0;
}