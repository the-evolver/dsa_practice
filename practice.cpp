#include <bits/stdc++.h>
using namespace std;

vector<int> currSubset(int num, vector<int>& arr){
  vector<int> bits;
  int j = 0;
  while(num > 0){
        if((num & 1) == 1){
            bits.push_back(arr[j]);
        }

        num /= 2;
        j++;

  }
  return bits;
}

void generateAllSubsets(int n , vector<int>& arr){
  int options = (1 << n );
  int st = 0;
  int en = options - 1;
  vector< vector< int > > ans;
  for(int i = st ; i <= en ; i++){
      vector<int> currSet = currSubset(i,arr);
      ans.push_back(currSet);

  }
  cout<<" num of sets ... "<<ans.size()<<endl;
  for(int i = 0 ; i < ans.size(); i++){
      cout<<" set "<<(i + 1)<<endl;
      cout<<" ------------------------- "<<endl;
      for(int j = 0 ; j < ans[i].size(); j++){
        cout<<ans[i][j] << "  ";
      }
      cout<<endl<<endl;
      cout<<" ------------------------- "<<endl;
     
  }
 
 
}

int main(){
  // generate all subsets using bit manupulation ...

  int n = 3;
  
  //vector<int> arr = {1,3,4,5,6};
  vector<int> arr ;
  arr.push_back(1);
  arr.push_back(3);
  arr.push_back(4);
  
  

  generateAllSubsets(n,arr);
  
  return 0;
}
