class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        unordered_map<char,int>ump;
        for(int in=0;in<s.size();in++){
            mp[s[in]]++;
        }
        for(int in=0;in<t.size();in++){
            ump[t[in]]++;
        }
        for(int in=0;in<t.size();in++){
            if(mp[t[in]]!=ump[t[in]]){
                return t[in];
            }
        }
        return ' ';
    }
};