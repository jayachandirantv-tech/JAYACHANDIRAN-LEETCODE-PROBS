class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
    int left=0;
    int right=0;
    unordered_map<int,int>mp;
    int maxlen=0;
         while(left<=right && right<nums.size()){
            while(mp[nums[right]]>=k){
                mp[nums[left]]--;
                left++;
            }
            mp[nums[right]]++;
            if(right<nums.size() && mp[nums[right]]<=k){
                maxlen=max(maxlen,(right-left+1));
            }
            right++;
         }
         return maxlen;
    }
};