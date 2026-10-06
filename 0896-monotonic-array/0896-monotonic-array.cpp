class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()<=2){
            return true;
        }
        bool increase=true;
        bool decrease=true;
        for(int in=0;in<nums.size()-1;in++){
            if(nums[in]>nums[in+1]) increase=false;
            if(nums[in]<nums[in+1]) decrease=false;
            if(!increase && !decrease) return false;
        }
        return true;
    }
};