class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>mp;
       vector<int>arr(2);

       for(int in=0;in<nums.size();in++)
       {
        int diff=target-nums[in];
        if(mp.find(diff)!=mp.end())
        {
            arr[0]=in;
            arr[1]=mp[diff];
            break;
        }
        mp[nums[in]]=in;
       }    
       
        return arr;
    }
};