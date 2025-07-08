// #include <iostream>
// #include <set>
// #include <vector>
// #include <map>
// using namespace std;


// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//        string str;
//        cin>>str;
//        int n = str.length();
//        bool isRight = false;
//        int rIndex = -1;
//        int rIndexEnd = -1;
//        for(int i = 0 ; i < n; i++){
//             if(str[i] == 'R'){
//                 if(isRight == false){
//                      isRight = true;
//                      rIndex = i;
//                 }
//                 rIndexEnd = i;
                 
//             }
//        }
//        cout<<(isRight ? max(rIndex + 1 , n  - rIndexEnd)  : n + 1)<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s;
        cin >> s;

        s = 'R' + s + 'R'; // handle from 0 to n+1 uniformly
        int maxGap = 0, lastR = 0;

        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == 'R') {
                maxGap = max(maxGap, i - lastR);
                lastR = i;
            }
        }
        cout << maxGap << '\n';
    }
    return 0;
}
