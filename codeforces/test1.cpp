#include <iostream>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);   // Redirect standard input to read from input.txt
    freopen("output.txt", "w", stdout); // Redirect standard output to write to output.txt

    int t; cin >> t;
    while (t--) {
      int n;
    cin >> n;         // Read number from input.txt
    cout << n; 
    }
           // Output the number to output.txt

    return 0;
}
