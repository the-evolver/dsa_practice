#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt[5] = {0}; // counts for 0..4

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    int ans = cnt[4]; // groups of 4 need individual taxis

    ans += cnt[3]; // groups of 3
    cnt[1] = max(0, cnt[1] - cnt[3]); // pair with 1s if possible

    ans += cnt[2] / 2; // pairs of 2
    cnt[2] %= 2;

    if (cnt[2]) { // if one 2 group left
        ans++;
        cnt[1] = max(0, cnt[1] - 2);
    }

    if (cnt[1] > 0) {
        ans += (cnt[1] + 3) / 4; // ceil(cnt[1]/4)
    }

    cout << ans << endl;
    return 0;
}
