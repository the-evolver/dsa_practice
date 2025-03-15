/*
soch vichar ke  .....
1. brute force - recursion + memo (pick a house or not pick a house) and generate all such cases ... but it it will have tc (2 ^ 10^5) which is not feasible

2. capability ho kya skti hai ? ex . houses [ 2, 4, 3 ,9 ,1 ] capability 1 (min) and 9(max)
 ke bich hin hogi na ... )

3. hmko minimum capability nikalna hai k houses ko luttne ke case me ... aur capability ka range hmen pta hai ... minimum money to maximum money ... yhi ho skta hai na capability ... iss se bahar ka nhi hoga ... 

4. hm iss range pe binary search kr skte hain and check krte rhenge ki kya ye capability possible hai ... agar hai to uske niche check krenge nhi to uss se upar check krenge ... iss way se to minimum possible capability hai woo hm nikal lenge ...alignas

5. kya current capability possible hai ye check krne ke liye hm bs ye check krna hai ki hmare array me kya k ya k se jada value hai non adjacent jiske values current capability se choti hai ...

6. (imp) -> ye confusion aa skti hai ki yar koe case me maine  ith ko pick kr capability check ki and answer i+1 th se ho ... aisa kbhi nhi hoga because agar i+1 th se answer hai and i be less than current capability hai to i se bhi answer hoga because  .. [i , i + 1th] ... [] hm i AND I+1TH SE ek hin pick kr skte hain and baki aage se koe kren .... 

*/


class Solution {
  public:
      int minCapability(vector<int>& nums, int k) {
          vector<int> range = calcR(nums);
         int minR = 1;
         int maxR = 1000000000;
  
         while(minR < maxR){
          int midR = (minR + maxR)/2;
          int houseTheft = 0;
          for(int i = 0 ; i < nums.size() ; i++){
              if(nums[i] <= midR){
                  houseTheft++;
                  i++;
              }
          }
          if(houseTheft >= k){
              maxR = midR;
          }
          else{
              minR = midR + 1;
          }
         }
        return maxR;
          
      }
  
      
  
  };