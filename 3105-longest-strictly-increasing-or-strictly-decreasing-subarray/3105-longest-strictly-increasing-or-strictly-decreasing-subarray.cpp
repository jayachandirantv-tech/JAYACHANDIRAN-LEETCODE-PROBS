class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxcount=1;
        int IncCount=1, DecCoun=1;
        for(int in=1;in<nums.size();in++){
            if(nums[in]>nums[in-1]){
                DecCoun++;
                IncCount=1;
            }
            else if(nums[in]<nums[in-1]){
                IncCount++;
                DecCoun=1;
            }
            else{
                IncCount=1;
                DecCoun=1;
            }
            maxcount=max(maxcount,max(IncCount,DecCoun));
        }
        return maxcount;
    }
};