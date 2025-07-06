#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int>& arr) {
    int i = 0, j = arr.size() - 1;
    int sumLeft = 0, sumRight = 0;
    int maxCandies = 0;

    while (i <= j) {
        if (sumLeft == sumRight)
            maxCandies = i + (arr.size() - j - 1);
        
        if (sumLeft <= sumRight) {
            sumLeft += arr[i++];
        } else {
            sumRight += arr[j--];
        }
    }

    // Final check if equal at the end
    if (sumLeft == sumRight)
        maxCandies = i + (arr.size() - j - 1);

    return maxCandies;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(arr) << "\n";
    }
    return 0;
}
