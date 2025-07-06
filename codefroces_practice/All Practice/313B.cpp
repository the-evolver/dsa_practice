// B. Fence

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 3 6 8 10 11
// first elemet jo bda ho uska index
// int solve( vector<int>& heights , int k){
    
   
// }

int main() {
   string str;
   cin>>str;
   int m;
   cin>>m;
   int n = str.length();
   vector<int> arr(n+1,0);

   for(int i = 0 ; i < n ; i++){
         arr[i+1] = arr[i] ;
         if(i < n - 1){
            arr[i+1] += (str[i] == str[i+1] ? 1 : 0);
         }
   }
   for(int i = 1 ; i <= m ; i++){
        int l ,r;
        cin>>l>>r;
        cout<<arr[r-1] - arr[l-1]<<endl;
   }

    return 0;
}

