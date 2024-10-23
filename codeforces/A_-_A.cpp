/**
 *    author: A K M S Limon
 *    created: 20-October-2024  15:54:15
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// This function merges two sorted subarrays
// arr[l...m] and arr[m+1 .. r] and also counts
// inversions in the whole subarray arr[l..r]
long long countAndMerge(vector<long long>& arr, int l, int m, int r){
    // Counts in two subarrays
    int n1 = m - l + 1, n2 = r - m;

    // Set up two vectors for left and right halves
    vector<long long> left(n1), right(n2);
    for (int i = 0; i < n1; i++)
        left[i] = arr[i + l];
    for (int j = 0; j < n2; j++)
        right[j] = arr[m + 1 + j];

    // Initialize inversion count (or result)
    // and merge two halves
    long long res = 0;
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {

        // No increment in inversion count
        // if left[] has a smaller or equal element
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        }
        // If right is smaller, then it
        // is smaller than n1-i elements
        // because left[] is sorted
        else {
            arr[k++] = right[j++];
            res += (n1 - i);
        }
    }

    // Merge remaining elements
    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];

    return res;
}

// Function to count inversions in the array
long long countInv(vector<long long>& arr, int l, int r){
    long long res = 0;
    if (l < r) {
        int m = (r + l) / 2;

        // Recursively count inversions
        // in the left and right halves
        res += countInv(arr, l, m);
        res += countInv(arr, m + 1, r);

        // Count inversions such that greater
        // element is in the left half and
        // smaller in the right half
        res += countAndMerge(arr, l, m, r);
    }
    return res;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<int, int>> v, v2;
        for (int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;
            v.push_back({a, b});
            v2.push_back({b, a});
        }
        sort(v.begin(), v.end());
        for (auto it : v) {
            cout << it.first << ' ' << it.second << ' ';
        }
        cout << '\n';
        // vector<ll> temp;
        // for (int i = 0; i < n; i++) {
        //     temp.push_back(v[i].second);
        // }
        // ll ans = countInv(temp, 0, n - 1);
        // sort(v2.begin(), v2.end());
        // vector<ll> temp2;
        // for (int i = 0; i < n; i++) {
        //     temp2.push_back(v2[i].second);
        // }
        // ll ans2 = countInv(temp2, 0, n - 1);
        // if (ans > ans2) {
        //     for (auto it : v) {
        //         cout << it.first << ' ' << it.second << ' ';
        //     }
        //     cout << '\n';
        // }
        // else {
        //     for (auto it : v2) {
        //         cout << it.second << ' ' << it.first << ' ';
        //     }
        //     cout << '\n';
        // }
    }
    return 0;
}