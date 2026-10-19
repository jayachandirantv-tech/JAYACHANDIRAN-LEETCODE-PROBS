class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int N=nums.size();
        int count=0;
        for(int in=1;in<N;in++){
            if(nums[in]==nums[in-1]){
                count++;
            }
        }
        return count;
    }
};