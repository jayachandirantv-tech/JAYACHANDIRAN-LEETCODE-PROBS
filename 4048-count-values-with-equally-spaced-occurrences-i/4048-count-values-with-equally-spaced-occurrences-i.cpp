class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int N=nums.size();
        set<int>st;
        unordered_map<int,int>mp;
        int count=0;
        for(int in=0;in<N;in++){
          mp[nums[in]]++;
        }
        for(int in=0;in<N;in++){
            if(mp[nums[in]]==3){
                st.insert(nums[in]);
            }
        }
        for(int in=0;in<N;in++){
            if(st.contains(nums[in])){
                for(int itr=in+1;itr<N;itr++){
                    if(nums[itr]==nums[in]){
                        if(2*itr-in<N){
                            if(nums[itr]==nums[2*itr-in]){
                                count++;
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};