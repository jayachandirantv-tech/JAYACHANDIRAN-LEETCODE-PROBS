class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int N=nums.size();
        int left=0;
        int totsum=0;
        int right=0;
        for(int num:nums) totsum+=num;
        if(totsum<x){
            return -1;
        }
        int tofindsum=totsum-x;
        int sum=0;
        int maxlen=0;
        while(right<N){
            sum+=nums[right];
            while( left<N && left<=right && sum>tofindsum){
                sum-=nums[left];
                left++;
            }
            if(sum==tofindsum){
            maxlen=max(maxlen,right-left+1);
            }
          right++;
        }
        if(tofindsum==0){
            return N;
        }
        if(maxlen==0 ){
            return -1;
        }
        return N-maxlen;
    }
};