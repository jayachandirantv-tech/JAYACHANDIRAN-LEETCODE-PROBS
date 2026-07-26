class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int maxp=INT_MIN;
        sort(nums.begin(),nums.end());
     for(int ctr1=0;ctr1<nums.size()-2;ctr1++)
     {
        int ctr2=ctr1+1;
        int ctr3=nums.size()-1;
        while(ctr2<ctr3)
        {
            int prod=nums[ctr1]*nums[ctr2]*nums[ctr3];
            maxp=max(maxp,prod);
            ctr2++;
            ctr3--;
        }
     } 
     return maxp;  
    }
};