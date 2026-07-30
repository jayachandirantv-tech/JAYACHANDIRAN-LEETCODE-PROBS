class Solution {
    vector<int>temp;
    vector<vector<int>>res;
void form(vector<int>& nums,vector<vector<int>>& res,int N,unordered_map<int,int>& mp){
    if(temp.size()==N)
    {
        res.push_back(temp);
        return;
    }
    for(int in=0;in<nums.size();in++)
    {
        if(mp[nums[in]]==0)
        {
          temp.push_back(nums[in]);
          mp[nums[in]]++;
          form(nums,res,N,mp);
           mp[nums[in]]--; 
           temp.pop_back();
        } 
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int N=nums.size();
        unordered_map<int,int>mp;
        form(nums,res,N,mp);
        return res;
    }
};