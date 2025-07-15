#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int steps = 0;
    while (m > n) {
        if (m & 1) {
            m += 1;      // agar odd hai to even se hin bn payega 
        } else {
            m >>= 1;     // even ke case best hai 2 divide ...
        }
        steps++;
    }
    steps += (n - m);  
    cout << steps << "\n";
    return 0;
}
