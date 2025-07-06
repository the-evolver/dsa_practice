#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
   int t;
   cin>>t;
   while(t--){
    int n ,q;
    cin>>n>>q;
    vector<int> brr(n,0);
   

    for(int i = 0 ; i < n ; i++)
        cin>>brr[i];
    
    sort(brr.begin(),brr.end(),greater<int>());
    for(int i = 1 ; i < n ; i++){
          
           brr[i] += brr[i-1];
    }
    
    
    while(q--){
        int x ;
        cin>>x;
        int ans;
        if(x > brr[n-1]){
            ans = -1;
        }else{
            ans = (lower_bound(brr.begin(),brr.end(),x) - brr.begin()) + 1;
        }

       
        cout<<ans<<endl;
    }


   }
    return 0;
}
