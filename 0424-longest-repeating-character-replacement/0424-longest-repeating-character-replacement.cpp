class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0,N=s.size();
        int left=0,maxv=0;
        vector<int>count(26,0);
        for(int in=0;in<N;in++)
        {
            int ch=s[in]-'A';
            count[ch]++;
            maxv=max(maxv,count[ch]);
        while(in-left+1-maxv>k)
        {
            count[s[left]-'A']--;
            left++;
        }
        res=max(res,in-left+1);
        }
        return res;
    }
};