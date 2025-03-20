class Solution {
  public:
      void rotate(vector<int>& nums, int k) {
          k = k % nums.size();
          if( k == 0)
          return;
          int sptr = 0; // for cases when stuck in loop
          int cnt = 0;
          int currPtr = 0;
          int currVal = nums[currPtr];
  
          while(cnt < nums.size()){
              int fptr = (currPtr + k ) % (nums.size());
              int fval = nums[fptr];
  
              nums[fptr] = currVal;
              currPtr = fptr;
              currVal = fval;
              cnt++;
              if(currPtr == sptr){
                  currPtr++;
                  sptr++;
                  currVal = nums[currPtr];
              }
          }
          
      }
  };