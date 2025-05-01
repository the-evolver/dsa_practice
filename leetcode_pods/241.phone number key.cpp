#include <bits/stdc++.h>
using namespace std;

void ph(vector<string>& res, string curr, string digits, int index, vector<string>& mp){
    if(index == digits.length()){
        res.push_back(curr);
        return;
    }
    string sIndex = mp[digits[index] - '0'];
    for(int j = 0; j < sIndex.length(); j++){
        ph(res, curr + sIndex[j], digits, index + 1, mp);
    }
}

vector<string> letterCombinations(string digits) {
    
  string arr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  vector<string> mp(arr, arr + 10);  
    vector<string> res;
    ph(res, "", digits, 0, mp);
    return res;
}

int main(){
    string str = "23";
    vector<string> ans = letterCombinations(str);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << "  ,  ";
    }
    return 0;
}
