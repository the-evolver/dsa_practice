class Solution {
public:
    void sortColors(vector<int>& nums) {

        int till0 = 0,till1 = 0,till2 = nums.size()-1;

        while(till1 <= till2){

            if(nums[till1] == 0){
                swap(nums[till0],nums[till1]);
                till0++;
                till1++;

            }
            else if(nums[till1] == 1){
                till1++;
                
            }
            else if(nums[till1] == 2){
                 swap(nums[till2],nums[till1]);
                 till2--;
                 
                
            }
        }
        return;
        
    }
};