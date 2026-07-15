class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int len=strs.size();
        int max=strs[0].size();
        for(int in=1;in<len;in++)
        {
            int count=0;
            int ctr=0;
            while(ctr<strs[in].size() && ctr<strs[in-1].size())
            {
                if(strs[in][ctr]==strs[in-1][ctr])
                {
                    count++;
                }
                else
                {
                    break;
                }
                ctr++;
            }
            max=min(count,max);
        }
        for(int in=0;in<max;in++)
            {
                s.push_back(strs[0][in]);
            }
        return s;
    }
};