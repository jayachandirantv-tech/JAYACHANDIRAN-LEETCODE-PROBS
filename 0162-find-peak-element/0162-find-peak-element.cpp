class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        auto maxval=max_element(nums.begin(),nums.end());
        return maxval-nums.begin();
    }
};