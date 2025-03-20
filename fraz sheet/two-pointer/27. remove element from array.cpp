class Solution {
  public:
      int removeElement(vector<int>& nums, int val) {
  
          int i = -1; // i signifies ki i tk val nhi hai ... removed hai 
          int j = 0;  // j signfies ki yahan pe hain hum .... 
          while( j < nums.size()){
              if(nums[j] == val)
                  j++;
              else{
                  swap(nums[i+1],nums[j]);
                  i++;
                  j++;
              }
          }
          return i + 1;
      }
  };