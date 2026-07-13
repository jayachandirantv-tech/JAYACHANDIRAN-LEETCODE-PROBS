class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int fmax=nums[0];
        int smax=nums[nums.size()-1];
        int prod=1;
        for(int in=0;in<nums.size();in++)
        {
            prod=nums[in]*prod;
            prod>fmax?fmax=prod:prod=prod;
            prod==0?prod=1:prod=prod;
        }
        prod=1;
        for(int in=nums.size()-1;in>=0;in--)
        {
            prod=nums[in]*prod;
            prod>smax?smax=prod:prod=prod;
             prod==0?prod=1:prod=prod;
        }
        return max(smax,fmax);
    }
};