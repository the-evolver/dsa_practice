class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int w1 = 0 , w2 = 1;
        vector<string> ans1;
        vector<string> ans2;

        for(int i = 0 ; i < words.size(); i++){
            if(groups[i] != w1){
                ans1.push_back(words[i]);
                w1 = groups[i];
            }

            if(groups[i] != w2){
                ans2.push_back(words[i]);
                w2 = groups[i];
            }
        }
        return ans1.size() > ans2.size() ? ans1 : ans2 ; 
        
    }
};