class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int N=nums.size();
        int itr=0;
        int in=1;
        while(itr<N){
            if(nums[itr]!=nums[in-1]){
                nums[in]=nums[itr];
                in++;
            }
            itr++;
        }
        return in;
    }
};