class Solution {
  public:
      void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         if(n == 0)
            return;
          
           int ptr1 = m - 1 , ptr2 = n - 1 , ptr3 = nums1.size() - 1;
  
           while(ptr1 >= 0 && ptr2 >= 0){
                 if(nums1[ptr1] > nums2[ptr2]){
                     nums1[ptr3] = nums1[ptr1];
                     ptr3--;
                     ptr1--;
                 }else{
                  nums1[ptr3] = nums2[ptr2];
                     ptr3--;
                     ptr2--;
                 }
           }
          while(ptr2 >= 0){
              nums1[ptr3] = nums2[ptr2];
                     ptr3--;
                     ptr2--;
  
          }
           
      }
  };