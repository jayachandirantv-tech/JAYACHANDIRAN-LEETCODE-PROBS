class Solution {
public:
    string longestPalindrome(string s) { 
        if(s.empty()){
            return "";
        }
     int N=s.size();
     int curr=1;
     string res(1,s[0]);
     int maxlen=1;
     while(curr<N){
        string temp(1,s[curr]);
        string temp2;
        int left=curr-1;
        int right=curr+1;
        int eleft=curr-1;
        
              while(left>=0 && right<N && s[left]==s[right])
              {
                temp=s[left]+temp;
                temp=temp+s[right];
                left--;
                right++;
                if(right-left-1>maxlen){
                    maxlen=(right-left-1);
                    res=temp;
                }
              }
            
            right=curr;
            left=curr-1;
            while(right<N && left>=0 && s[left]==s[right]){
                temp2=s[left]+temp2;
                temp2+=s[right];
                left--;
                right++;
                if(right-left-1>maxlen){
                    maxlen=right-left-1;
                    res=temp2;
                }
            }
               curr++;
              }
     return res;
    }
};