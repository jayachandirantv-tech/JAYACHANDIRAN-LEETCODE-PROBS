class Solution {
public:
    string longestPalindrome(string s) { 
       int N=s.size();
       if(N==0){
        return "";
       }
       if(N==1){
        return s;
       }
       string res(1,s[0]);
       int curr=1;
       int maxlen=0;
       while(curr<N){
        // for the odd palindrome string like ava
         int left=curr-1;
         int right=curr+1;
         string temp(1,s[curr]);
         while(left>=0 && right<N && s[left]==s[right]){
            temp=s[left]+temp;
            temp=temp+s[right];
            right++;
            left--;
            if(maxlen<right-left-1){
                res=temp;
                maxlen=right-left-1;
            }
         }
         // for even palindrome string aa
         right=curr;
         left=curr-1;
         string evtemp;
         while(left>=0 && right<N && s[left]==s[right]){
            evtemp=evtemp+s[right];
            evtemp=s[left]+evtemp;
            right++;
            left--;
            if(right-left-1>maxlen){
                maxlen=right-left-1;
                res=evtemp;
            }
         }
         curr++;
       }
       return res;
    }
};