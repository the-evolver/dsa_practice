class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
         
         // logic => harr iteration me last iteration ke base pe new string ke chars ka count ko manage krna 
         // because string pe actual operation krne me tc => O(t * n) > 10^8 ...
         vector<int> cnt(26,0);
         for(char c:s){
            cnt[c-'a']++;
         }
         
         int mod = 1000000007;
         for(int i = 1 ; i <= t ; i++){
              
              vector<int> nextState(26,0);
              for(int j = 0 ; j <= 25 ; j++){
                   if( j == 25){
                       // z -> ab
                        nextState[0] = (nextState[0] + cnt[j]) % mod;
                        nextState[1] = (nextState[1] + cnt[j]) % mod;
                   }else{

                       nextState[j+1] = cnt[j] % mod;
                       
                   }
              }
              cnt = nextState;
              

         }
         int len = 0;
         for(int i = 0 ; i < 26 ; i++){
            len = (len + cnt[i]) % mod;
         }
        return len;
    }
    
};