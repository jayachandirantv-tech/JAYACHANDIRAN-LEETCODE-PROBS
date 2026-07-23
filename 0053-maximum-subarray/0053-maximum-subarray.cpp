class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int in=0;
        int maxsum=nums[0];
        while(in<nums.size())
        {
            sum+=nums[in];
            maxsum=max(maxsum,sum);
            if(sum<0)
            {
                sum=0;
            }
            in++;
        }
        return maxsum;
    }
};