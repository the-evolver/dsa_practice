// B. Fence

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 3 6 8 10 11
// first elemet jo bda ho uska index
int solve( vector<int>& heights , int k){
    int n = heights.size();
     if(k == 1){
        auto it =  (min_element(heights.begin(),heights.end()));
        int index = it - heights.begin();
        return index + 1;
    }
     int currSum = 0;
     int minSum = 0;
     int index = 0;
     int i = 0;
     while(i < k){
        minSum += heights[i];
        i++;
     }
     currSum = minSum;
     for(; i < n ; i++){
        currSum = currSum - heights[i-k] + heights[i];
        if(currSum < minSum){
            minSum = currSum;
            index = i - k + 1;
        }
     }
     return index + 1;
   
}

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> heights(n,0);
    for(int i  = 0 ; i< n ; i++)
          cin>>heights[i];
    
    cout<<solve(heights,k);
    

    return 0;
}

