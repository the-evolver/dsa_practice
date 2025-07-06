#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int digi(int64_t num){
    int sum = 0 ;
    while(num){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


int main() {
    int k;cin>>k;
    for(int64_t i = 1 ; i <= INT64_MAX ; i += 9){
          if(digi(i) == 10){
             k--;
          }
          if(k == 0){
            cout<<i<<endl;
            break;
          }

    }

    return 0;
}
