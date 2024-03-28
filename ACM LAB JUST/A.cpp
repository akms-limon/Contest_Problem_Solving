/**
 *    author: A K M S Limon
 *    created: 17-March-2024  14:05:47
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool divisible(string s, int k) {
    int ans=0;
    for(int i = 0; i < s.size(); i++){
        ans = (ans * 10 + (s[i] - '0')) % k;
    }
    return ans;
}

string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    return "0";
    vector<int> result(len1 + len2, 0);
    int i_n1 = 0; 
    int i_n2 = 0;
    for (int i=len1-1; i>=0; i--) {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;           
        for (int j=len2-1; j>=0; j--) {
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;
 
            i_n2++;
        }
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;
    if (i == -1)
    return "0";
    string s = "";
    while (i >= 0)
        s += std::to_string(result[i--]);
    return s;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int d; cin >> d;
    string s = to_string(d);
    string s1 = to_string(d);
    string ans = multiply(s, s1);
    while (divisible(ans, d) != 0) {
        ans = multiply(ans, s1);
    }
    cout << ans << '\n';
    return 0;
}