class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
      pair<__int128,__int128> res1 = cntSumAndZeros(nums1);
      pair<__int128,__int128> res2 = cntSumAndZeros(nums2);

      __int128 s1 = res1.second,z1 = res1.first,s2 = res2.second,z2 = res2.first;
      if(z1 == 0 && z2 == 0)
          return (s1 == s2 ? s1 : -1);

      if(z1 == 0){
           return check(s1,s2,z2);
      }   
      else if(z2 == 0){
        return check(s2,s1,z1);

      }   
      
        
       __int128 low ,high;

       if(s1 > s2){
          low = s1 + (z1);
          high = LLONG_MAX;
          return helper(low,high,z2,s2);

       }
          low = s2 + (z2);
          high = LLONG_MAX;
          return helper(low,high,z1,s1);

        
    }
    __int128 check(__int128 fixedSum,__int128 sum ,__int128 z ){
        __int128 maxSum = fixedSum;
        __int128 rangeSum = sum + (z);

        if(maxSum >= rangeSum)
            return maxSum;
        return -1;


    }
    __int128 helper(long long low,long long high , long long z , long long s){
        if(low > high)
            return -1 ;
        //__int128 sum = (__int128)a + (__int128)b;
        __int128 mid = ((__int128)low + (__int128)high) / 2;
        long long res;
        if(mid >= z + s){
            long long val = helper(low,mid-1,z,s);
            return val != -1 ? val : mid;
        }
        return helper(mid + 1,high,z,s);

    }
    pair<__int128,__int128> cntSumAndZeros(vector<int> arr){

        long long zeros = 0;
        long long sum = 0;
        pair<long long,long long> res;
        for(int i = 0 ; i < arr.size();i++){
             zeros += (arr[i] == 0 ? 1 : 0);
             sum += arr[i];
        }
        cout<<" zeros "<<zeros<<" sum "<<sum<<endl;
        res.first  = zeros;
        res.second = sum;
        return res;
    }
};