class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        vector<int>count(26,0);
        int maxv=0;
        int left=0;
        for(int in=0;in<s.size();in++)
        {
            count[s[in]-'A']++;
            maxv=max(maxv,count[s[in]-'A']);
            while((in-left+1-maxv)>k)
            {
              count[s[left]-'A']--;
              left++;
            }
            res=max(res,in-left+1);
        }
        return res;
    }
};
