#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string solve(int num,int k){

    int minS = (k * k);
    return ( (num >= minS) && (minS > 0) && (num % 2 == k % 2) )  ? "YES" : "NO";
    
   
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int num , k;
        cin>>num>>k;
        cout<<solve(num,k)<<endl;
    }
    

    return 0;
}

