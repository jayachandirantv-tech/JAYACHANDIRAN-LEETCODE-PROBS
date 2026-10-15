class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int N=nums.size();
        int sum=0;
        for(int in=0;in<N;in++){
            int count=0;
            unordered_map<int,int>mp;
            if(mp[nums[in]]==0){
                mp[nums[in]]++;
                count++;
            }
            sum+=(count*count);
            for(int itr=in+1;itr<N;itr++){
                if(mp[nums[itr]]==0){
                    count++;
                    mp[nums[itr]]++;
                }
                sum+=(count*count);
            }
        }
        return sum; 
    }
};