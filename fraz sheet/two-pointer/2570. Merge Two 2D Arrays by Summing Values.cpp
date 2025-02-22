class Solution {
  public:
      vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
          vector<vector<int>> ans;
          int ptr1 = 0 , ptr2 = 0;
          while(ptr1 < nums1.size() && ptr2 < nums2.size()){
                 if(nums1[ptr1][0] < nums2[ptr2][0]){
                     ans.push_back(nums1[ptr1]);
                     ptr1++;
                 }
                 else if(nums1[ptr1][0] > nums2[ptr2][0]){
                    ans.push_back(nums2[ptr2]);
                     ptr2++;
                 }else{
                  vector<int> temp;
                  temp.push_back(nums1[ptr1][0]);
                  temp.push_back(nums1[ptr1][1] + nums2[ptr2][1]);
                  ans.push_back(temp);
                  ptr1++;
                  ptr2++;
                 }
          }
  
          while(ptr1 < nums1.size()){
                     ans.push_back(nums1[ptr1]);
                     ptr1++;
          }
          
          while(ptr2 < nums2.size()){
                     ans.push_back(nums2[ptr2]);
                     ptr2++;
          }
          return ans;
      }
  };