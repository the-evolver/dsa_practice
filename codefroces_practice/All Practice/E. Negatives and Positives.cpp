#include <iostream>
#include <cmath>
#include <vector>
#include <math.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n,0);
        unsigned long long  sum = 0;
        int numNegatives = 0;
        int mini = 1000000000+9;
        bool isZERO = false;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            int modVal = (arr[i] > 0 ? arr[i] :-arr[i]);
            sum += modVal;
            if(arr[i] == 0)
               isZERO = true;

            if(arr[i] < 0 ){
                numNegatives++;
            }
            mini = min(mini,modVal);

            
        }
        if(isZERO){
            mini = 0;
        }
        //cout<<"sum"<<sum<<"mini"<<mini<<"numnegative"<<numNegatives<<endl;
        cout<<(numNegatives % 2 == 0 ? sum : (sum - (2 * mini)))<<endl;
        
    }
    return 0;
}
