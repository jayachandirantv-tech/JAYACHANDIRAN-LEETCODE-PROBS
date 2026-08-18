class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        unordered_map<int,int>mp;
        while(right<nums.size()){
            while(right-left+1<k){
             right++;
            }
            unordered_map<int,int>temp;
            int tt=0;
        for(int in=left;in<=right;in++){
            temp[nums[in]]++;
            if(temp[nums[in]]==1){
               mp[nums[in]]++;
            }
        }
        left++;
        right++;
        }
        int maxv=-1;
        for(auto x:nums){
            if(mp[x]==1){
                maxv=max(maxv,x);
            }
        }
        return maxv;
    }
};