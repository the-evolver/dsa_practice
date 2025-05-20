class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {

        int n = nums.size();
        vector<int> differenceArr(n+1,0);
        for(int i = 0 ; i < queries.size(); i++){
             int l = queries[i][0];
             int r = queries[i][1];
             differenceArr[l]   += 1;
             differenceArr[r+1] -= 1;

        }
        int prefix = 0;
        for(int i = 0 ; i < n ; i++){
              prefix += differenceArr[i];
              differenceArr[i] = prefix;
              if(nums[i] - differenceArr[i] > 0 ){
                  return false;
              }
        }
        return true;
    }
};