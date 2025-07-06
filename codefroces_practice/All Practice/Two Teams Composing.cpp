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
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> freq;
        int maxFreq = 0;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
            maxFreq = max(maxFreq, freq[x]);
        }
        int distinct = freq.size();

        if(maxFreq == distinct) {
            cout << distinct - 1 << endl;
        } else {
            cout << min(maxFreq, distinct) << endl;
        }
    }
    return 0;
}


