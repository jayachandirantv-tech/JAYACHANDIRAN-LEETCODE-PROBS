class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int N=nums.size();
        int count=0;
        unordered_map<int,int>mp;
       for(int in=0;in<N;in++){
         mp[nums[in]]++;
       }
       for(int in=0;in<N;in++){
        int target=k+nums[in];
        if(mp[target]>0){
            count+=mp[target];
            if(target==nums[in]){
                count--;
            }
        }
       }
       return count;
    }
};