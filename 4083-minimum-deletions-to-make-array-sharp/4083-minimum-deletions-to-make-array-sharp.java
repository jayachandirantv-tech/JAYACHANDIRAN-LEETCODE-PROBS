class Solution {
    public int minDeletions(int[] nums) {
        int N=nums.length;
        int count=0;
        for(int in=1;in<N;in++){
            if(nums[in]==nums[in-1]){
                count++;
            }
        }
    return count;
    }
}