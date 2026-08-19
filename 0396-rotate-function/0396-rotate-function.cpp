class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int maxval=INT_MIN;
        int N=nums.size();
        if(N==1)
        {
            return 0;
        }
        map<int,int>f;
        int sum=0;
        int f0=0;
        for(int in=0;in<N;in++)
        {
            sum+=nums[in];
            f0+=(nums[in]*in);
        }
        f[0]=f0;
        maxval=max(maxval,f0);
        for(int in=1;in<N;in++)
        {
          f[in]=f[in-1]+sum-(N*nums[N-in]);
          maxval=max(maxval,f[in]);
        }
        return maxval;

    }
};