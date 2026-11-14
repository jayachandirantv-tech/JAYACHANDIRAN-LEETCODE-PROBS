class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
       int N=nums.size();
       int res=INT_MAX;
      for(int size=l;size<=r;size++){
        int left=0;
       int right=0;
       int sum=0;
        while(left<N){
            while(right<N && right-left+1<=size){
                sum+=nums[right];
                right++;
            }
            if(right-left == size && sum > 0){
             res=min(res,sum);
            }
            sum=sum-nums[left];
            left++;
        }

      }
      return (res==INT_MAX)?-1:res;
    }
};