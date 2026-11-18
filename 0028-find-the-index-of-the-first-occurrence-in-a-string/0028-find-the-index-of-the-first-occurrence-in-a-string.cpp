class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size();
        int n=needle.size();
         vector<int>pref(haystack.size()+1,0);
        for(int in=1;in<=haystack.size();in++){
            pref[in]=pref[in-1]+(haystack[in-1]-'a'+1);
        }
        int hash=0;
        for(int in=0;in<needle.size();in++){
            hash+=(needle[in]-'a'+1);
        }
        int left=0;
        int right=0;
        while(left<=h-n){
            right=left+n;
            int sum=pref[right]-pref[left];
            int ind=0;
            if(sum==hash){
                for(int in=left;in<right;in++){
                    if(ind<haystack.size() && haystack[in]==needle[ind]){
                        ind++;
                    }
                }
            }
            if(ind==needle.size()){
                return left;
            }
            left++;
        }
      return -1;
    }
};