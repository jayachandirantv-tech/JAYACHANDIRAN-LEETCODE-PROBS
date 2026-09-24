class Solution {
public:
    int rob(vector<int>& nums) {
      int N=nums.size();
      if(N==1){
        return nums[0];
      }
      vector<int>dp(N,0);
      dp[0]=nums[0];
      dp[1]=max(nums[0],nums[1]);
      for(int in=2;in<N;in++){
         dp[in]=max(nums[in]+dp[in-2],dp[in-1]);
      }
      return dp[N-1];      
    }
};