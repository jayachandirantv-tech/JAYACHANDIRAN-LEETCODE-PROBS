class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size()==1) return s;
        string fhres;
        string mid;
        unordered_map<char,int>mp;
        for(auto &ch:s){
            mp[ch]++;
        }
        for(char ch='a';ch<='z';ch++){
            if(mp[ch]%2==0){
            int cpy=mp[ch]/2;
            while(cpy--){
            fhres+=ch;
            }
            }
            else
            {
                int cpy=mp[ch]/2;
                while(cpy--){
                    fhres+=ch;
                }
                mid+=ch;
            }
        }
        string strrev=fhres;
        reverse(strrev.begin(),strrev.end());
        return fhres+mid+strrev; 
    }
};