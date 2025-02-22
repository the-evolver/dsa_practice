class Solution {
  public:
      vector<int> sortArrayByParityII(vector<int>& nums) {
  
          int tillEven = 0 , tillOdd = 1;
          while(tillEven < nums.size() && tillOdd < nums.size()){
               if(nums[tillEven] % 2 == 0){
                  tillEven += 2;
               }
               else if(nums[tillOdd] % 2 != 0){
                  tillOdd += 2;
               }
               else{
                  swap(nums[tillEven],nums[tillOdd]);
               }
          }
          return nums;
      }
  };