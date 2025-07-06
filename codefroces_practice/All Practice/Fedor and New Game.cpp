#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// string solve(int num,int k){

//     int minS = (k * k);
//     return ( (num >= minS) && (minS > 0) && (num % 2 == k % 2) )  ? "YES" : "NO";
    
   
// }

int main() {
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> players(m+1,0);
    for(int i = 0 ; i < m + 1 ; i++)
        cin>>players[i];
        
    int ans = 0;
    for(int i = 0 ; i < m ; i++){
         int curr = players[i];
         int mainP = players[m];
         int diff = 0;
         for(int j = 0 ; j <= 20 ; j++){
              if((curr & (1 << j)) != (mainP & (1 << j))){
                     diff++;
              }
         }
         if(diff <= k){
            ans++;
         }
    }
    cout<<ans<<endl;
    return 0;
}

