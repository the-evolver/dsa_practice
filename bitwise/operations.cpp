#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int num){
  if(num == 0)
     return false;

  return ((  num  & (num - 1)) == 0);
}

int numOfSetBits(int num){
  int cnt = 0;
  while(num){
    num = ( num ) & ( num - 1);
    cnt++;
  }
  return cnt;
}


// time complexity of fast exponentiation => o (log b)
int fastP(int a , int b){
  int res = 1;
  
  while(b){
      if( b & 1){
           res = res * a;
      }
      a = a * a;
      b/=2;
  }
   return res;
}

bool valid(int x,int y, int n){
  
  return x > 0 && x <= n && y > 0 && y <= n;
}

int helper(int currX,int currY,int tarX,int tarY,int N, vector<vector<bool> >& vis){
  
  if(currX <= 0 || currX > N || currY <= 0 || currY > N )
      return -1;
      
  if(currX == tarX &&  currY == tarY )
       return 0;
       
  int minTillYet = INT_MAX;
  vis[currX][currY] = true;
  
  vector<vector<int> > allPos;
  vector<int> v
  allPos.push_back([1,2]);
  allPos.push_back({1,-2});
  allPos.push_back({-1,2});
  allPos.push_back({-1,-2});
  allPos.push_back({2,1});
  allPos.push_back({2,-1});
  allPos.push_back({-2,1});
  allPos.push_back({-2,-1});
  
  for(int i = 0 ; i < allPos.size(); i++){
      int newX = currX + allPos[i][0];
      int newY = currY + allPos[i][1];
      
      if( ( valid(newX,newY,N) ) && ( !vis[newX][newY] ) ){
         
         int res = helper(newX,newY,tarX,tarY,N,vis);
         if(res >= 0){
             minTillYet = min(minTillYet,res + 1);
         }
      }
  }
  
       vis[currX][currY] = false;
       return minTillYet == INT_MAX ? -1 : minTillYet;
  

}

int minStepToReachTarget(vector<int>& KnightPos, vector<int>& TargetPos, int N) {
  // Code here
  vector<vector< bool>> vis(N+1,vector<bool>(N+1,false));
  
  int currX = KnightPos[0];
  int currY = KnightPos[1];
  int tarX  = TargetPos[0];
  int tarY  = TargetPos[1];
  

  return helper(currX,currY,tarX,tarY,N,vis);
  
}





int main(){
  // for(int i = 0 ; i < 100 ; i++){

  //   cout<<" Is number "<<i<<" power of 2 ? "<<boolalpha<<isPowerOfTwo(i)<<endl;
  //   cout<<" number of set bits in number "<<i<<" is : "<<numOfSetBits(i)<<endl;
  //   cout<<endl;

  // }
  vector<int> k;
  k.push_back(4);
  k.push_back(5);

  vector<int> t;
  k.push_back(1);
  k.push_back(1);

  cout<< minStepToReachTarget(k,t,6)<<endl;
  return 0;
}