
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(102,0);
        int numOdds = 0;
        for(int i = 0 ; i < n ; i++){
            int x ;
            cin>>x;
            arr[x]++;
            if(x & 1){
                numOdds++;
            }
        }
        int numEvens = n - numOdds;
        if(numEvens % 2 == 0){
            cout<<"YES"<<endl;
        }else{
            bool possible = false;
            for(int i = 1 ; i <=100;i++){
                if(arr[i] > 0 && arr[i+1] > 0){
                         possible = true;
                         break;
                }
            }
             cout<<(possible ? "YES" :"NO")<<endl;
        }



        

    }
    return 0;
}
