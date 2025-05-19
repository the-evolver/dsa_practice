class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0] + nums[1] <= nums[2])
            return "none";


        string ans ="";
        if(nums[0] == nums[1] && nums[1] == nums[2])
            ans += "equilateral";
        else if(nums[0] == nums[1] || nums[1] == nums[2])
             ans += "isosceles";
        else
           ans += "scalene";

           return ans;
    }
};