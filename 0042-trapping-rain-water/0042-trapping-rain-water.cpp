class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>rm,lm;
        int maxval=INT_MIN;
        int n=height.size();
        for(int in=0;in<n;in++)
        {
            maxval=max(maxval,height[in]);
            lm.push_back(maxval);
        }
        maxval=INT_MIN;
        for(int in=n-1;in>=0;in--)
        {
          maxval=max(maxval,height[in]);
          rm.push_back(maxval);
        }
        reverse(rm.begin(),rm.end());
        int water=0;
        for(int in=0;in<n;in++)
        {
            water+=min(lm[in],rm[in])-height[in];
        }
        return water;
    }
};