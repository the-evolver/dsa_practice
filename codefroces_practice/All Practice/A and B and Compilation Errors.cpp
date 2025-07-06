#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// string solve(int num,int k){

//     int minS = (k * k);
//     return ( (num >= minS) && (minS > 0) && (num % 2 == k % 2) )  ? "YES" : "NO";
    
   
// }

int main() {
    int n;
    cin>>n;

    //vector<int> arr(n,0);

    int xorA =0 ,xorB =0,xorC=0;
    for(int i = 0 ; i < n ; i++){
          int x ;
          cin>>x;
          xorA = (xorA ^ x);
    }
    for(int i = 0 ; i < n - 1 ; i++){
          int x ;
          cin>>x;
          xorB = (xorB ^ x);
    }
    for(int i = 0 ; i < n - 2 ; i++){
          int x ;
          cin>>x;
          xorC = (xorC ^ x);
    }
    cout<<(xorA ^ xorB)<<endl<<(xorB ^xorC)<<endl;
    return 0;
}

