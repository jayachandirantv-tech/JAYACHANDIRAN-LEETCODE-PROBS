class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int N=s.size();
        string t='1' + s + '1';
        int totalones=0;

        for(int in=0;in<s.size();in++)
        {
            if(s[in]=='1')
            {
                totalones++;
            }
        }
        int ans=totalones;
        vector<pair<char,int>>blocks;
        int count=1;
        for(int in=1;in<t.size();in++)
        {
            if(t[in]==t[in-1])
            {
                count++;
            }
            else
            {
                blocks.push_back({t[in-1],count});
                count=1;
            }
        }
        for(int in=1;in<blocks.size();in++)
        {
            if(blocks[in].first=='1' && blocks[in-1].first=='0' &&blocks[in+1].first=='0')
            {
                int temp=totalones+blocks[in-1].second+blocks[in+1].second;

                 ans=max(ans,temp);   
            }
        
        }
        return ans;
    }
};