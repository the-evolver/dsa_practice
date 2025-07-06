// A. Fancy Fence

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string solve(int angle){
    int rem = (360) % (180 - angle);
    return rem > 0 ? "NO" :"YES";
}
int main() {
    int t;
    cin >>t;
    while(t--){
        int angle;
        cin >>angle;
        cout<<solve(angle)<<endl;
    }
    return 0;
}

