class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i = 0 ; i < words.size();i++){
            if(isChar(words[i],x))
                 ans.push_back(i);
        }
        return ans;
        
    }
    bool isChar(string str,char x){
        for(char c : str){
            if(c == x)
                return true;
        }
        return false;
    }
};