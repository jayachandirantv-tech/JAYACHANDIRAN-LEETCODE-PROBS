class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int N=piles.size();
        vector<vector<int>>dp(N,vector<int>(N));
        for(int in=0;in<N;in++){
            dp[in][in]=piles[in];
        }
        int size=2;
        while(size<=N){
            int st=0;
            int end=st+size-1;
            while(end<N){
                int left=piles[end]-dp[st][end-1];
                int right=piles[st]-dp[st+1][end];
                dp[st][end]=max(left,right);
                end++;
                st++;
            }
            size++;
        }
        return dp[0][N-1]>=0?1:0;
    }
};