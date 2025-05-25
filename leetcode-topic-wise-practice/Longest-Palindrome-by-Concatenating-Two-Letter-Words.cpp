class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        int ans = 0;
        int n =  words.size();
        for(int i = 0 ; i < n ; i++){
            string curr = words[i];
            string r_curr = string(curr.rbegin(),curr.rend());
            if(mp.find(r_curr) != mp.end() && mp[r_curr] > 0){
                 ans += 4;
                 mp[r_curr]--;
                 
            }else{
                
                    mp[curr] += 1; 
                    cout<<curr<<" "<<mp[curr]<<endl;
                
                
            }

        }
        int maxi = 0;
        for(auto it : mp){
             string key = it.first;
             int val = it.second;
             if(key[0] == key[1]){
                  maxi = max(maxi,val);
             }
        }
        ans += (maxi * 2);
        return ans;
        
    }
};