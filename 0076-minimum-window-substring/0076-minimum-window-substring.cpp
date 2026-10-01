class Solution {
public:
    string minWindow(string s, string t) {
        int N=s.size();
        unordered_map<char,int>ump;
        for(char ch:t) ump[ch]++;
        int ind=ump.size();
        int minlen=INT_MAX;
        int left=0;
        int right=0;
        int tot=0;
        int count=0;
        string res="";
        int start=0;
        unordered_map<char,int>mp;
        while(right<N){
            mp[s[right]]++;
            if(mp[s[right]]==ump[s[right]]){
                count++;
            }
            while(count==ind){
            if(minlen>right-left+1){
                minlen=right-left+1;
                start=left;
            }
             mp[s[left]]--;
             if(ump[s[left]]!=0 && mp[s[left]]<ump[s[left]]){
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