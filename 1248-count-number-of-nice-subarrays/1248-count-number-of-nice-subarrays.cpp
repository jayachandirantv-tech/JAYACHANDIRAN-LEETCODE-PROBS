class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
         int N=nums.size();
         vector<int>pref(N+1,0);
         for(int in=1;in<=N;in++){
            pref[in]=pref[in-1]; // odd cases
            if(nums[in-1]%2==1){
                pref[in]=pref[in]+1; //even cases
            }
         }
         unordered_map<int,int>mp;
         mp[0]=1;
         int right=1;
         int count=0;
         while(right<=N){
            int needed=pref[right]-k;
            count+=(mp[needed]);
            mp[pref[right]]++;
            right++;
         }
         return count;
    }
};