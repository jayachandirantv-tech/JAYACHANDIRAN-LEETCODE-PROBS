class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxcount=1;
        int ic=1;
        int dc=1;
        for(int in=1;in<nums.size();in++){
            if(nums[in]>nums[in-1]){
                dc++;
                ic=1;
            }
            else if(nums[in]<nums[in-1]){
                ic++;
                dc=1;
            }
            else{
                ic=1;
                dc=1;
            }
            maxcount=max(maxcount,max(ic,dc));
        }
        return maxcount;
    }
};