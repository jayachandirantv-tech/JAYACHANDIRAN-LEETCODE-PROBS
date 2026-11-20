class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int>mp;
       unordered_map<int,int>ump;
       for(int in=0;in<nums1.size();in++){
        mp[nums1[in]]++;
       }
       for(int in=0;in<nums2.size();in++){
        ump[nums2[in]]++;
       }
       vector<int>res;
        set<int>st(nums1.begin(),nums1.end());
        for(int num:st){
            int minval=min(mp[num],ump[num]);
            if(minval>0){
                for(int in=0;in<minval;in++){
                    res.push_back(num);
                }
            }
        }
        return res;
    }
};