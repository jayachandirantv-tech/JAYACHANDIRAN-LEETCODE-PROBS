class Solution {
public:
    int longestValidParentheses(string s) {
       stack<int>st;
       st.push(-1);
       int maxlen=0;
       int n=s.size();
       for(int in=0;in<n;in++)
       {
        if(s[in]=='(')
        {
            st.push(in);
        }
        else
        {
            st.pop();
            if(st.empty())
            {
                st.push(in);
            }
            else
            {
                maxlen=max(maxlen,in-st.top());
            }
        }

       }
       return maxlen;
    }
};