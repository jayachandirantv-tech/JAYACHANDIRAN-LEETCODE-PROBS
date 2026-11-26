class Solution {
public:
    int countVowelSubstrings(string word) {
        set<char>st={'a','e','i','o','u'};
        int tot=0;
        for(int in=0;in<word.size();in++){
            int count=0;
            vector<int>freq(26,0);
            for(int j=in;j<word.size();j++){
             if(st.contains(word[j])){
                if(freq[word[j]-'a']==0){
                    count++;
                }
                freq[word[j]-'a']++;
             }
             else{
                break;
             }
             if(count>=5){
                tot++;
             }
            }
            
        }
        return tot;
    }
};