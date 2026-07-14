class Solution {
public:
 void solve(int ind,vector<int> curr,vector<vector<int>>& res,int N,vector<int>& nums)
 {
    res.push_back(curr);
    for(int in=ind;in<N;in++)
    {
        curr.push_back(nums[in]);
        solve(in+1,curr,res,N,nums);
        curr.pop_back();
    }
 }
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<int>curr;
      vector<vector<int>>res;
      int N=nums.size();
      solve(0,curr,res,N,nums);
      return res;      
    }
};