class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int in=0;in<haystack.size();in++){
            if(haystack[in]==needle[0]){
                int cpy=in;
                int ind=0;
                while(ind<needle.size() && haystack[cpy]==needle[ind]){
                    ind++;
                    cpy++;
                }
                if(ind==needle.size()){
                   return in;
                }
            }
        }
        return -1;
    }
};