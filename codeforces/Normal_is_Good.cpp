#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to count the number of normal subarrays
int countNormalSubarrays(const vector<int>& A) {
    int n = A.size();
    int normal_count = 0;

    // Single element subarrays are always normal
    normal_count += n;

    // Now consider subarrays of length 2 or more
    for (int length = 2; length <= n; ++length) {
        for (int i = 0; i <= n - length; ++i) {
            vector<int> subarray(A.begin() + i, A.begin() + i + length);

            // Calculate mean
            double sum = 0;
            for (int num : subarray) {
                sum += num;
            }
            double mean = sum / length;

            // Calculate median
            sort(subarray.begin(), subarray.end());
            double median;
            if (length % 2 == 1) {
                median = subarray[length / 2];
            } else {
                median = subarray[length / 2 - 1];
            }

            // Check if the subarray is normal
            if (mean == median) {
                ++normal_count;
            }
        }
    }

    return normal_count;
}

int main() {
    int T;
    cin >> T; // Read number of test cases

    while (T--) {
        int N;
        cin >> N; // Length of the array A
        vector<int> A(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> A[i]; // Read elements of array A
        }

        // Count the number of normal subarrays
        int result = countNormalSubarrays(A);
        cout << result << endl; // Output the result
    }

    return 0;
}
