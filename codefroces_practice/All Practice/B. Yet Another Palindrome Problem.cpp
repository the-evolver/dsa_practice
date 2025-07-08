// #include <iostream>
// #include <set>
// #include <vector>
// #include <map>
// using namespace std;

// // 18
// // 12 14 12 15 17 16 11 5 15 15 7 15 15 14 16 16 11 11

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;cin>>n;
//         map<int,int> mp;
//         bool isPoss = false;
//         for(int i = 0 ; i < n ; i++){
//             int x;
//             cin >> x;
//             if(mp.find(x) != mp.end()){
//                 int oldIndex = mp[x];
//                 if(oldIndex + 1 < i){
//                       isPoss = true;
//                       break;
//                 }

//             }else{
//                 mp[x] = i;
//             }
//         }
//         cout<<(isPoss ? "YES" : "NO")<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <set>
#include <vector>
#include <map>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i = 0 ; i < n ;i++)
             cin>>arr[i];
        
        map<int,int> mp;
        bool isPoss = false;
        for(int i = 0 ; i < n ; i++){
            int x = arr[i];
           
            if(mp.find(x) != mp.end()){
              
                int oldIndex = mp[x];
                  
                if(oldIndex + 1 < i){
                      isPoss = true;
                      break;
                }

            }else{
                 //cout<<" not found old"<<endl;
                mp[x] = i;
            }
        }

        cout<<(isPoss ? "YES" : "NO")<<endl;
    }
    return 0;
}