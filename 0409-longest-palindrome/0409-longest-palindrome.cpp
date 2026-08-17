class Solution {
public:
    int longestPalindrome(string s) {
        int N=s.size();
        unordered_map<char,int>mp;
        string temp;
        for(auto ch:s){
            mp[ch]++;
            if(mp[ch]==1){
                temp+=ch;
            }
        }
        int size=0;
        int onesize=0;
        int maxsize=0;
        for(auto ch:temp){
            if(mp[ch]%2==0){
              size+=(mp[ch]);
            }
            else{
              if(mp[ch]>maxsize){
               if(maxsize==0){
                maxsize=mp[ch];
               }
               else
               {
                size+=(maxsize-1);
                maxsize=mp[ch];
               }
             }
             else
             {
                size+=(mp[ch]-1);
             }
        }
        }
        return size+maxsize; 
    }
};