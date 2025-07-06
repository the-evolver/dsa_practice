#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        long long sumA = 0, maxB = 0, result = 0;
        for (int i = 0; i < min(n, k); ++i) {
            sumA += a[i];
            maxB = max(maxB, (long long)b[i]);
            long long total = sumA + maxB * (k - (i + 1));
            result = max(result, total);
        }

        cout << result << '\n';
    }
    return 0;
}
