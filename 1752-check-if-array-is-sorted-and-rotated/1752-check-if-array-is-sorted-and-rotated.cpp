class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int in=0;in<nums.size();in++){
            if(nums[in]>nums[(in+1)%nums.size()]){
                count++;
            }
        }
        return count<=1;
    }
};