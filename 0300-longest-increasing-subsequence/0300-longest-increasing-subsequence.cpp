class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int N=nums.size();
        vector<int>dp(N,1);
        int maxval=1;
        for(int in=0;in<N-1;in++)
        {
            for(int itr=in+1;itr<N;itr++)
            {
                if(nums[in]<nums[itr])
                {
                    dp[itr]=max(dp[in]+1,dp[itr]);
                    maxval=max(maxval,dp[itr]);
                }
            }
        }
      return maxval;
    }
};