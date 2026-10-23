class Solution {
public:
    int sortPermutation(vector<int>& nums) {
     int k=0;
     bool seen=false;
     for(int in=0;in<nums.size();in++){
        if(nums[in]!=in){
          if(seen==false){
            seen=true;
            k=nums[in];
          }
          else{
            k=k & nums[in];
          }
        }
     }
     return k;
    }
};