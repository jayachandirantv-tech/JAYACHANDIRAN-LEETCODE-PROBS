class Solution {
public:
    int minMoves2(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int N=nums.size();
      int center=nums[(N)/2];
      int count=0;
      for(int in=0;in<N/2;in++){
          count+=(center-nums[in]);
          count+=(nums[N-in-1]-center);
      }  
      return count;
    }
};