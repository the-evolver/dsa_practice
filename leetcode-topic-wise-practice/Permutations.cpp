class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> res;
        vector<int> path;
        vector<bool> vis(nums.size(),false);

        helper(nums,res,path,vis);

        return res;
        
    }

    void helper(vector<int>& nums,vector<vector<int>>& res ,vector<int>& path, vector<bool>& vis){
        if(nums.size() == path.size()){
            res.push_back(path);
            return;
        }

        for(int i = 0 ; i < nums.size();i++){
             if(vis[i])
                continue;

             vis[i] = true;
             path.push_back(nums[i]);
             helper(nums,res,path,vis);
             vis[i]=false;
             path.pop_back();
        }
        return;
    }
};