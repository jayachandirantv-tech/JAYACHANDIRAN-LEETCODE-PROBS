class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {
    const int mod=1e9+7;
     vector<int>pref(nums.size()+1,0);
     long long count=0;
     long long even=1;
     long long odd=0;
     int N=nums.size();
     for(int in=1;in<=N;in++){
          pref[in]=pref[in-1]+nums[in-1];
          if(pref[in]%2==0){
            count=(count+odd)%mod;
            even++;
          }
          else{
            count=(count+even)%mod;
            odd++;
          }  
     }
     return count;
    }
};