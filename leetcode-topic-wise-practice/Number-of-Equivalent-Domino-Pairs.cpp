class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {

        map< pair<int,int> , int > mp;
        
        int len = dominoes.size();
        for(int i = 0 ; i < len ; i++){
              int small , large;
              if(dominoes[i][0] > dominoes[i][1]){
                small = dominoes[i][1];
                large = dominoes[i][0];
              }else{
                 small = dominoes[i][0];
                 large = dominoes[i][1];
              }

              pair<int,int> p = {small,large};
              if(mp.find(p) == mp.end()){
                mp[p] = 1;
              }else{
                mp[p]++;
              }
        }
        int sum = 0;
        for(auto it : mp){
            cout<<"  it second "<<it.second<<endl;
            if(it.second > 1){
                int num = it.second - 1;
                sum += ((num * (num + 1))/2);
            }
        }

        return sum;
    }
};