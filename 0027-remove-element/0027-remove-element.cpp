class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int count=0;
       for(int in=0;in<nums.size();in++)
       {
        if(nums[in]!=val)
        {
            nums[count++]=nums[in];
        }
       }
       return count;
    }
};