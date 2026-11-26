class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0;
        int tot=0;
        int mp[26]={0};
        for(int right=0;right<s.size();right++){
            mp[s[right]-'a']++;
            while(mp[0]>0 && mp[1]>0 && mp[2]>0 && left<s.size()){
               tot+=(s.size()-right);
               mp[s[left]-'a']--;
               left++;
            }
        }
        return tot;
    }
};