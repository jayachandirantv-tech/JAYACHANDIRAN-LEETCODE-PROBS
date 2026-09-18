class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int in=0;in<nums.size();in++){
            mp[nums[in]]++;
            if(mp[nums[in]]>1){
                return nums[in];
            }
        }
        return -1;
    }
};