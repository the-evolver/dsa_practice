#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
   
    int m, s;
    cin >> m >> s;

    // 1) Impossible cases
    if (s == 0) {
        if (m == 1) {
            cout << "0 0\n";
        } else {
            cout << "-1 -1\n";
        }
        return 0;
    }
    if (s > 9*m) {
        cout << "-1 -1\n";
        return 0;
    }

    // 2) Build maximum
    int rem = s;
    string maxNum(m, '0');
    for (int i = 0; i < m; i++) {
        int d = min(9, rem);
        maxNum[i] = char('0' + d);
        rem -= d;
    }

    // 3) Build minimum
    rem = s;
    string minNum(m, '0');
    for (int i = 0; i < m; i++) {
        int lo = (i == 0 ? 1 : 0);
        for (int d = lo; d <= 9; d++) {
            // Can we place digit d here and still make the rest?
            if (rem - d <= 9 * (m - i - 1)) {
                minNum[i] = char('0' + d);
                rem -= d;
                break;
            }
        }
    }

    // 4) Output
    cout << minNum << " " << maxNum << "\n";
    return 0;
}
