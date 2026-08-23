class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<int>mp(1000001,0);
        vector<vector<int>>fin;
        for(int in=0;in<nums.size();in++){
             mp[nums[in]]++;
        }
        vector<int>res;
        for(int in=lower;in<=upper;in++){
            if(mp[in]==0){
                  res.push_back(in);
            }
        }
        if(res.empty()){
            return fin;
        }
        int start=res[0];
        for(int in=1;in<res.size();in++){
            if(res[in]!=res[in-1]+1){
                fin.push_back({start,res[in-1]});
                start=res[in];
            }
        }
        fin.push_back({start,res.back()});
        return fin;
    }
};