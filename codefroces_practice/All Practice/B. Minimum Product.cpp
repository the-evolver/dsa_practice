#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int64_t solve(int a, int b, int x, int y, int n) {
    // Try reducing a first, then b
    int reduceA = min(a - x, n);
    int newA = a - reduceA;
    int newB = b - min(b - y, n - reduceA);
    int64_t prod1 = 1LL * newA * newB;

    // Try reducing b first, then a
    int reduceB = min(b - y, n);
    newB = b - reduceB;
    newA = a - min(a - x, n - reduceB);
    int64_t prod2 = 1LL * newA * newB;

    return min(prod1, prod2);
}

int main() {
    int t; cin >> t;
    while (t--) {
        int a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        
        int diffA = a - x;
        int diffB = b - y;
       
        
        int64_t ans = solve(a,b,x,y,n);
        // if(diffA + diffB <= n ){
        //       ans = (x *1LL* y);

        // }else{
            
        //     int newA = a - min(n,diffA);
        //     int newN = n - min(n,diffA);
        //     int newB = b - min(newN,diffB);
        //     int64_t  ans1 = (newA *1LL* newB);
            
        //     int newB2 = b - min(n,diffB);
        //     int newN2 = n - min(n,diffB);
        //     int newA2 = a - min(newN2,diffA);
        //     int64_t  ans2 = (newA2 *1LL* newB2);


        //     int rem = (n/2) + (n % 2 != 0 ? 1 : 0);
        //     int newA3 = a - min(rem,diffA);
        //     int newN3 = n - min(rem,diffA);
        //     int newB3 = b - min(newN3,diffB);
        //     int64_t  ans3 = (newA3 *1LL* newB3);

        //     int newB4 = b - min(rem,diffB);
        //     int newN4 = n - min(rem,diffB);
        //     int newA4 = a - min(newN4,diffA);
        //     int64_t ans4 = (newA4 *1LL* newB4);

        //     ans = min(ans1,min(ans2,min(ans3,ans4)));

        // }
        cout<<ans<<endl;
    }
    return 0;
}
