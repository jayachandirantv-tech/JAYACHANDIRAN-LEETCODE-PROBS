class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int currsum=0;
        int count=0;
        unordered_map<int,int>prefixsum;
        prefixsum[0]=1;
        for(int in=0;in<nums.size();in++)
        {
            currsum+=nums[in];
            if(prefixsum[currsum-k]!=0)
            {
                count+=prefixsum[currsum-k];
            }
           prefixsum[currsum]++;
        }
        return count;
    }
};