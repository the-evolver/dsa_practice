class Solution {
  public:
      vector<int> rearrangeArray(vector<int>& nums) {
          vector<int> newArr(nums.size());
          int posP = 0 ,negP = 1;
          for(int i = 0 ; i < nums.size() ; i++){
              if(nums[i] >= 0){
                  newArr[posP] = nums[i];
                  posP += 2;
              }else{
                  newArr[negP] = nums[i];
                  negP += 2;
              }
          }
          return newArr;
      }
  };