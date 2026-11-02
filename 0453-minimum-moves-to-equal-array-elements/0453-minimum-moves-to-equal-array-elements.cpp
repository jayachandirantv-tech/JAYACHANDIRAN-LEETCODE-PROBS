class Solution {
public:
    int minMoves(vector<int>& nums) {
        int N=nums.size();
        if(N==1) return 0;
       sort(nums.begin(),nums.end());
       int req=nums[0];
       int count=0;
     for(int in=N-1;in>=1;in--){
        if(nums[in]>req){
            count+=(nums[in]-req);
        }
     }
     return count;
    }
};