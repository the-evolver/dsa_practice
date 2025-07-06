// B. Interesting drink [https://codeforces.com/problemset/problem/706/B]


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 3 6 8 10 11
// first elemet jo bda ho uska index
int solve( vector<int>& arr , int currEl){
    int low = 0 , high = arr.size() - 1 , mid = -1;
    while(low <= high){
         mid = (low + high)/2;
         if(arr[mid] > currEl){
             high = mid - 1;
         }else{
            low = mid + 1;
         }
    }
    
    return high + 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i  = 0 ; i< n ; i++)
          cin>>arr[i];
    
    
    sort(arr.begin(),arr.end());
    int q;
    cin>>q;

    for(int i = 0 ; i < q;i++){
        int x;
        cin >> x;
        cout<<solve(arr,x)<<endl;
    }

    return 0;
}

