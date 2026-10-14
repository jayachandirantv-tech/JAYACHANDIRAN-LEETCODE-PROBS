class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1=word1.size();
        int N2=word2.size();
        int curr=0;
        string res="";
        while(curr<N1 && curr<N2){
          res+=word1[curr];
          res+=word2[curr];
          curr++;
        }
        while(curr<word1.size()){
            res+=word1[curr];
            curr++;
        }
        while(curr<word2.size()){
            res+=word2[curr];
            curr++;
        }
        return res;
    }
};