#include <iostream>
#include <cmath>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n;cin>>n;
   
    int n25 = 0, n50 = 0;
    bool possible = true;
    for(int i = 1 ; i <= n ; i++){
        int x ;
        cin>>x;
        if(x == 25){
            n25++;
        }else if(x == 50){
             if(n25 == 0 ){
                possible = false;
                break;
             }else{
                n25--;
                n50++;
             }
        }else{
             if(n50 >= 1 && n25 >= 1){
                 n50--;
                 n25--;
             }else if(n25 >= 3){
                n25 -= 3;

             }else{
                possible = false;
                break;
             }
        }
    }
    cout<<(possible ?"YES":"NO")<<endl;
    return 0;
}
