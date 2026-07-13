class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxval=nums[0];
        for(int in=0;in<nums.size();in++)
        {
            sum+=nums[in];
            maxval=max(sum,maxval);
            sum<0?sum=0:sum=sum;
        }
        return maxval;
    }
};