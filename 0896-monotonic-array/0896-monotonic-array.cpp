class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()<=1) return true;
        bool check1=true;
        if(nums[0]>=nums[1]){
            for(int in=1;in<nums.size()-1;in++){
                if(nums[in]>=nums[in+1]){
                    continue;
                }
                else{
                    check1=false;
                    break;
                }
            }
        }
        else{
            check1=false;
        }
        bool check2=true;
        if(nums[0]<=nums[1]){
            for(int in=2;in<nums.size();in++){
                if(nums[in]>=nums[in-1]){
                    continue;
                }
                else{
                    check2=false;
                    break;
                }
            }
        }
        else{
            check2=false;
        }
        return (check1||check2);
    }
};