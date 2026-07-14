class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int ctr1=0;ctr1<nums.size()-2;ctr1++)
        {
            if(ctr1>0 && nums[ctr1]==nums[ctr1-1])
            {
                continue;
            }
            int ctr2=ctr1+1;
            int ctr3=nums.size()-1;
            while(ctr2<ctr3)
            {
                int sum=nums[ctr1]+nums[ctr2]+nums[ctr3];
            if(sum==0)
            {
                res.push_back({nums[ctr1],nums[ctr2],nums[ctr3]});

                while(ctr2<ctr3 && nums[ctr2]==nums[ctr2+1])
                {
                    ctr2++;
                }
                while(ctr2<ctr3 && nums[ctr3]==nums[ctr3-1])
                {
                    ctr3--;
                }
                ctr2++;
                ctr3--;
            }
            else if(sum<0)
            {
                ctr2++;
            }
            else
            {
                ctr3--;
            }
        }
        }
        return res;
    }
};