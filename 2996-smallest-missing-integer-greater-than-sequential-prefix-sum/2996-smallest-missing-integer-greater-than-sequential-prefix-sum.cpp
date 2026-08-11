class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int N=nums.size();
        int sum=nums[0];
        unordered_set<int>st(nums.begin(),nums.end());
        for(int in=0;in<N-1;in++){
            if(nums[in]+1==nums[in+1])
            {
                 sum+=nums[in+1];
                 continue;
            }
            else
            {
             break;
            }
        }
        while(st.count(sum)){
            sum++;
        }
        return sum;
    }
};