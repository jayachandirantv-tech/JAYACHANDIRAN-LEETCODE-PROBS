class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int maxv=1;
        vector<int>dp(nums.size(),1);
        for(int in=0;in<nums.size();in++){
            for(int itr=in+1;itr<nums.size();itr++){
                if(nums[in]<nums[itr]){
                    dp[itr]=max(dp[in]+1,dp[itr]);
                    maxv=max(maxv,dp[itr]);
                }
            }
        }
                return maxv;
    }
};