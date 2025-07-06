// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <map>
// using namespace std;

// bool solve(int teamSize,int n,map<int,int>& mp ){
//     if(teamSize * 2 > n)
//        return false;

//     int temp = 0;
//     int cnt = 0;
//     for(auto it: mp){
//         if(it.second > 1){
//             temp += it.second;
//             cnt++;
//         }
//     }

//    for(auto it : mp){
//         int freq = it.second;
//         int distinct = n - temp + ((teamSize < freq ? cnt : (cnt - 1 >= 0 ? cnt - 1 : cnt) ));
//         if(distinct >= teamSize && freq >= teamSize)
//            return true;
             
       
//    }
//    return false;

// }

// int main() {
//     int t;
//     cin>>t;
    
//     while(t--){
//     int n;cin>>n;
//     map<int,int> mp;
//     int tSum = 0;
//     for(int i = 0 ; i < n ; i++){
//         int x;cin>>x;
//         if(mp.find(x) != mp.end()){
//             tSum -= ( mp[x] == 1 ? 0 : mp[x]);
//             mp[x]++;
//             tSum += mp[x];
//         }else{
//             mp[x] = 1;
            
//         }
//     }
//     int distinct = n - tSum;
//     int ans = 0;
//     int lo = 1 , hi = n , mid ;

//     while(lo <= hi){
//           mid = (lo + hi)/2;
//           //cout<<"checking for mid "<<mid<<endl;
//           if(solve(mid,n,mp)){
//              ans = mid;
//              lo = mid + 1;
//           }else{
//             hi = mid - 1;
//           }
//     }
    
   
//     cout<<ans<<endl;
//     }

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;


bool isPerfectCube(long long num) {
    long long cbrt_num = round(cbrt(num));
    return cbrt_num * cbrt_num * cbrt_num == num;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long x;
        cin >> x;
        bool found = false;

        for(long long a = 1; a * a * a < x; a++) {
            long long b_cubed = x - a * a * a;
            if(b_cubed <= 0) continue;
            if(isPerfectCube(b_cubed)) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}
