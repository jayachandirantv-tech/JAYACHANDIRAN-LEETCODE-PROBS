class Solution {
    int solve(vector<int>& stonevalues,int ind,int N,vector<int>& memo){
         if(ind>=N){
            return 0;
        }
        if(memo[ind]!=-1){
            return memo[ind];
        }
       int in=1;
       int temp=0;
       int ans=INT_MIN;
       while(ind<N && ind+in<=N && in<=3){
        temp+=stonevalues[ind+in-1];
        memo[ind]=ans;
        ans=max(ans,temp-solve(stonevalues,ind+in,N,memo));
        in++;
       }
       return memo[ind]=ans;
    }
public:
    string stoneGameIII(vector<int>& stonevalues) {
        int N=stonevalues.size();
        vector<int>dp(N);
        vector<int>memo(N,-1);
        int ans=solve(stonevalues,0,N,memo);
        if(ans>0) return "Alice";
        else if(ans<0) return "Bob";
        return "Tie";
    }
};