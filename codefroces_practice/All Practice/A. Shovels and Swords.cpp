#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        long long result = min(min(a,b),(a+b)/3);
        cout << result << "\n";
    }
    return 0;
}
