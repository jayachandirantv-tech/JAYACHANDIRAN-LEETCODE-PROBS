class Solution {
public:
    int scoreOfParentheses(string s) {
      stack<int>st;
      st.push(0);
      for(int in=0;in<s.size();in++){
        if(s[in]=='('){
            st.push(0);
        }
        else{
            int x=st.top();
            st.pop();
            if(x==0){
              st.top()+=1;
            }
            else{
                x=x*2;
                st.top()+=x;
            }
        }
      }
      return st.top();
    }
};