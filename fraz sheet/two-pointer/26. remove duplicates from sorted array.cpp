class Solution {
  public:
      int removeDuplicates(vector<int>& nums) {
  
          int i = 0 , j = 0 ; // i signifies kaha tk duplicates nhi hain and j signifies ki j se phle iterate ho chuka hai and abhi j pe iterate hoga ... ...
          while( j < nums.size()){
              if(nums[i] == nums[j])
                  j++;
              else{
                  swap(nums[i+1],nums[j]);
                  i++;
                  j++;
              }
          }
          return i+1;
      }
  };