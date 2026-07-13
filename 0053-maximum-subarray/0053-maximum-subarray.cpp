class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=nums[0];
        int sum=0;
        int index;
        int len=nums.size();
        for(index=0;index<len;index++)
        {
            sum=sum+nums[index];
            if(sum>max)
            {
                max=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        return max;
    }
};