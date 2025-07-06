#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int findMinN(int x) {
    double target = (x / 5.0) + 1.0;
    int n = ceil(log2(target));
    return n;
}


int main() {
    
    int t;
    cin>>t;
    while(t--){
       int x,y,k;
       cin>>x>>y>>k;

       int numXsteps = (x/k) + (x % k > 0 ? 1 : 0);
       int numYsteps = (y/k) + (y % k > 0 ? 1 : 0);
       int ans = 0;
       if(numXsteps > numYsteps){
           ans = numXsteps + (numXsteps - 1);
       }
       else if(numXsteps < numYsteps){
        ans = numYsteps + numYsteps;
       }else{
         ans = numXsteps + numYsteps;
       }

       cout<<ans<<endl;
    }
}



