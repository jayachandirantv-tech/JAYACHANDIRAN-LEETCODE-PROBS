// logic is that we need to increment all the n-1 element at the same that required condition but instead of that what we do is we are decrementing the one element which visualises to incrementing other n-1 element so we are finding the number of moves taken to decrement all the element to the minimum element and we are finding the total numbeer of moves that the result
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