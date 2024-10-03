#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {
        int n;
        cin >> n;  // Read the length of the sequence

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];  // Read the elements of the sequence
        }

        int alternating_sum = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {  // Even index (0-based)
                alternating_sum += a[i];
            } else {  // Odd index (0-based)
                alternating_sum -= a[i];
            }
        }

        cout << alternating_sum << endl;  // Output the result for the current test case
    }

    return 0;
}





