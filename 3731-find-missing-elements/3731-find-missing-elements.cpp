class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        unordered_map<int,int>mp;
        vector<int>res;
        int minv=INT_MAX;
        int maxv=INT_MIN;
        for(int in=0;in<nums.size();in++){
            minv=min(minv,nums[in]);
            maxv=max(maxv,nums[in]);
           mp[nums[in]]++;
        }
        for(int in=minv;in<=maxv;in++){
            if(mp[in]==0){
              res.push_back(in);
            }
        }
        return res;
    }
};