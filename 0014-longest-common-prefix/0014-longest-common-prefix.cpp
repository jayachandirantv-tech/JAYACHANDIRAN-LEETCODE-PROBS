class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
         return "";
        string s;
        int max=strs[0].size();
        int ctr;
        int len=strs.size();
        for(ctr=1;ctr<len;ctr++)
        {
            int i=0;
            int count=0;
            while(i<strs[ctr].size()&& i<strs[ctr-1].size())
            {
                if(strs[ctr][i]==strs[ctr-1][i])
                {
                    count++;
                }
                else
                {
                    break;
                }
                i++;
            }
            if(count<max)
        
            max=count;
        }
            for(ctr=0;ctr<max;ctr++)
            {
                s.push_back(strs[0][ctr]);
            }

        return s;

        
    }
};