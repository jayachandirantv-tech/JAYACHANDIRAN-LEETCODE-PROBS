class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int count=0;
        int N=nums.size();
        if(nums.size()==1){
            return 1;
        }
        for(int in=0;in<N;in++){
            if(in==0){
                if(nums[1]<=nums[0]){
                   count++;
                }
            }
            else if(in==N-1){
                if(nums[N-2]<=nums[N-1]){
                    count++;
                }
            }
            else{
                if((nums[in-1]+nums[in+1])/2.0<=nums[in]){
                   count++;
                }
            }
        }
        return count;
    }
};