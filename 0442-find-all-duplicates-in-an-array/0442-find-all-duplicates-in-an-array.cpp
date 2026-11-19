class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>res;
        for(int in=0;in<nums.size();in++){
            if(mp[nums[in]]>0){
            res.push_back(nums[in]);
            continue;
        }
        mp[nums[in]]++;
        }
        return res;
    }
};