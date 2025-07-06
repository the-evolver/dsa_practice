#include <iostream>
#include <cmath>
#include <vector>
#include <math.h>
using namespace std;

bool isHeightValid(vector<int>& arr, int w, int currH){
    unsigned long long sumW = 0;
    for(int i = 0 ; i < arr.size(); i++){
        sumW += ( arr[i] < currH ? currH - arr[i] : 0);

    }
    
    return sumW <= w;
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,w;
        cin >> n >> w;
        vector<int> arr(n,0);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];  
        }
    
        unsigned long long low = 0 , high = INT64_MAX , mid;
        int ans = 0;
        while(low <= high){
            mid = (low + high)/2;
            if(isHeightValid(arr,w,mid)){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }

        }
        cout<<ans<<endl;
        
    }
    return 0;
}
