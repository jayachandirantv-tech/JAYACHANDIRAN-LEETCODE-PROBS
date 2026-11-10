class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int N=nums.size();
        int count=0;
        for(int in=0;in<N-1;in++){
            for(int itr=in+1;itr<N;itr++){
                if(abs(nums[in]-nums[itr])==k){
                    count++;
                }
            }
        }
        return count;
    }
};