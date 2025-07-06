#include <iostream>
#include <cmath>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n ;
        cin >> n ;
        vector<int> arr(n,0);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];  
        }
    
        vector<int> allRes(n,0);
        int maxi = 0;
        for(int i = n - 1 ; i >= 0 ; i--){
             int j = i + arr[i];
             if ( j >= n){
                  allRes[i] = arr[i];

             }else{
                 allRes[i] = arr[i] + allRes[j];

             }
             maxi = max(maxi,allRes[i]);
        }
        cout<<maxi<<endl;
    }
    return 0;
}
