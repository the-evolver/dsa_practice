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
    vector<vector<int> > ed;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    v1.push_back(0);
    v1.push_back(1);
    v2.push_back(0);
    v2.push_back(2);
    v3.push_back(1);
    v3.push_back(2);
   ed.push_back(v1);
   ed.push_back(v2);
   ed.push_back(v3);
   

   vector< vector<int> > adj(3);
   for(int i = 0 ; i < ed.size(); i++){
        int e1 = ed[i][0];
        int e2 = ed[i][1];
        adj[e1].push_back(e2);
        adj[e2].push_back(e1);

   }
   for(int i = 0 ; i < adj.size(); i++){
       cout<<" list of "<<i<<" ";
    for(int j = 0 ; j < adj[i].size();j++){
         cout<<adj[i][j]<<" , ";
    }
    cout<<endl;
   }
   
    return 0;
}

