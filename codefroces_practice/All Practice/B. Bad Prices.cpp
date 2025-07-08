#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n ; cin>>n;
        vector<int> arr(n,0);
        for(int i = 0 ; i < n ; i++)
           cin>>arr[i];
        int minTilYet = arr[n-1];
        int ans = 0;
        for(int i = n - 2 ; i >= 0 ; i--){
              if(arr[i] > minTilYet){
                ans++;
              }else{
                minTilYet = arr[i];
              }
        }
        cout<<ans<<endl;

    }
    return 0;
}
