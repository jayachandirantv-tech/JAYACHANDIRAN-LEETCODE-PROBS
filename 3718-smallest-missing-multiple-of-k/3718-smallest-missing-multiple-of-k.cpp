class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
    unordered_map<int,int>mp;
     for(auto &num:nums){
        mp[num]++;
     }
     int i=1;
     while(mp[k*i]>=1){
        i++;
     }
     return k*i;
    }
};