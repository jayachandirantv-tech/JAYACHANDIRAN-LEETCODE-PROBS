class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
    int N=nums.size();
    vector<vector<int>>dp(N,vector<int>(N));
    for(int in=0;in<N;in++){
        dp[in][in]=nums[in];
    }
    int size=2;
      while(size<=N){
        int st=0;
        int end=st+size-1;
        while(end<N){
            int left=nums[end]-dp[st][end-1];
            int right=nums[st]-dp[st+1][end];
            dp[st][end]=max(left,right);
            st++;
            end++;
        }
        size++;
        }
        return (dp[0][N-1])>=0?1:0;
      } 
};