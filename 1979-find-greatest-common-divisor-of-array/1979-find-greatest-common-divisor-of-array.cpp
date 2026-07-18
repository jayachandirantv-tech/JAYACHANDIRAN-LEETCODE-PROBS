class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxval=nums[0];
        int minval=nums[0];
        for(int in=0;in<nums.size();in++)
        {
            maxval=max(maxval,nums[in]);
            minval=min(minval,nums[in]);
        }
        int a=maxval;
        int b=minval;
        while(b!=0)
        {
            int rem=a%b;
            a=b;
            b=rem;
        }
        return a;
    }
};