class Solution {
public:
    int minimizeSum(vector<int>& nums) {
      int N=nums.size();
      if(N==3) return 0;
      sort(nums.begin(),nums.end());

     /* i have an idea of there are three cases that is if we need to obtain the lower or the minimum
     score then there are three cases that is:

     1 case:
     we can change the minimum most values so that the minimum score can be changed

     2 case:
     we can change the maxmimum both values so that the maximum values can be changed

     3 case:
     we can change one of the minimum value and one of the maximum values so that the score diff wont be much higher
     */

  int diff=nums[N-1]-nums[0];

  diff=min(diff,abs(nums[2]-nums[N-1]));

  diff=min(diff,abs(nums[0]-nums[N-3]));

  diff=min(diff,abs(nums[1]-nums[N-2]));
  return diff;
 }
};