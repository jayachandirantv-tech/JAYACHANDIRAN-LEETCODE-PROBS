class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int N=nums.size();
        int count=0;
        for(int in=0;in<N;in++){
            for(int itr=0;itr!=in;itr++){
                if(abs(nums[in]-nums[itr])==k){
                    count++;
                }
            }
        }
        return count;
    }
};