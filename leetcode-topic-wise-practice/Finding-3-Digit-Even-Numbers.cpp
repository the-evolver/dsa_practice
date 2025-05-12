class Solution {
public:
   set<vector<int>> st;
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> mp(10,0);
        for(int i = 0 ; i < digits.size(); i++){
            mp[digits[i]]++;
        }
        helper(mp,digits,3,{});
        vector<int> ans;
        for(auto itr : st){
               ans.push_back(calc(itr));
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
    int calc(vector<int> num){
        int res = 0;
        for(int i = 0 ; i < num.size() ; i++){
            res = (res * 10) + num[i];
        }
        return res;
    }

    void helper(vector<int>& mp,vector<int>& digits,int left , vector<int> curr){
        if(left == 0){
            if(curr[0] != 0 && ((curr[2] & 1) == 0) ){
                st.insert(curr);
            }
            return;
        }

        for(int i = 0 ; i < mp.size();i++){
             if(mp[i] > 0){
                curr.push_back(i);
                mp[i]--;
                
                helper(mp,digits,left-1,curr);
                curr.pop_back();
                mp[i]++;
             }
        }

    }
};