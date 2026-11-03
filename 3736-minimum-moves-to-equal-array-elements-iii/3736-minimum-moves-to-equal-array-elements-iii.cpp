class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int req=nums[nums.size()-1];
        int count=0;
        for(int in=0;in<nums.size();in++){
            count+=(req-nums[in]);
        }
        return count;
    }
};