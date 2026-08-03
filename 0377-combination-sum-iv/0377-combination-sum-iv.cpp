class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned long long>dp(target+1,0);
        dp[0]=1;
        sort(nums.begin(),nums.end());
        for(int in=1;in<=target;in++)
        {
            for(int trav:nums)
            {
                if(trav>in)break;
                dp[in]=(dp[in]+dp[in-trav]);
            }
        }
        return dp[target];
    }
};