class Solution {
public:
    string minWindow(string s, string t) {
        int N=s.size();
        unordered_map<char,int>smp;
        for(char ch:t) smp[ch]++;
        int indiv=smp.size();
        unordered_map<char,int>mp;
        int left=0;
        int right=0;
        int count=0;
        int start=0;
        int minlen=INT_MAX;
        while(right<N){
            mp[s[right]]++;
            if(mp[s[right]]==smp[s[right]]){
                count++;
            }
            while(count==indiv){
                if(minlen>right-left+1){
                    minlen=right-left+1;
                    start=left;
                }
                mp[s[left]]--;
                if(smp[s[left]]!=0 && mp[s[left]]<smp[s[left]]){
                    count--;
                }
                left++;
           }
           right++;
        }
        if(minlen==INT_MAX){
            return "";
        }
        return s.substr(start,minlen);
    }
};