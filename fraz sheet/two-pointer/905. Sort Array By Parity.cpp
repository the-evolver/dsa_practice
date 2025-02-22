class Solution {
  public:
      vector<int> sortArrayByParity(vector<int>& nums) {
  
          int placeTillEven = -1;
          int currIndex = 0;
          while(currIndex < nums.size()){
              if(nums[currIndex] % 2 == 0){
                  // even hai to place till even increase krdo ...
                  int temp = nums[currIndex];
                  nums[currIndex] = nums[placeTillEven + 1] ;
                  nums[placeTillEven + 1]  = temp;
                  placeTillEven++;
              }
              currIndex++;
          }
          return nums;
      }
  };