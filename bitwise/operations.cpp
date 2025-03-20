#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int num){
  if(num == 0)
     return false;

  return ((  num  & (num -1)) == 0);
}

int numOfSetBits(int num){
  int cnt = 0;
  while(num){
    num = ( num ) & ( num - 1);
    cnt++;
  }
  return cnt;
}

int main(){
  for(int i = 0 ; i < 100 ; i++){

    cout<<" Is number "<<i<<" power of 2 ? "<<boolalpha<<isPowerOfTwo(i)<<endl;
    cout<<" number of set bits in number "<<i<<" is : "<<numOfSetBits(i)<<endl;
    cout<<endl;

  }
  return 0;
}