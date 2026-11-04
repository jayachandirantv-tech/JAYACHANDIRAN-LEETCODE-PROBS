class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int N=nums.size();
        int temp=0;
        int minval=INT_MAX;
        for(int in=1;in<=N;in++){
            int size=to_string(nums[in-1]).size();
            temp=temp*pow(10,size)+nums[in-1];
            if(in%2==0){
              minval=min(minval,temp);
              temp=0;
            }
        }
        return minval;
    }
};