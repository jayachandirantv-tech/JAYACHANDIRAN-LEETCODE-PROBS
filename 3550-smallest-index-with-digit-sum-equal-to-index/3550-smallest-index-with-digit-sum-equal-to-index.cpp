class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int N=nums.size();
        for(int in=0;in<N;in++){
            int temp=nums[in];
            int sum=0;
            while(temp>0){
               sum+=temp%10;
               temp=temp/10;
            }
            if(sum==in){
                return in;
            }
        }
        return -1;
    }
};