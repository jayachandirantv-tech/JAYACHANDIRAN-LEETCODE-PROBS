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
                int x=st.top(); // for calculating the already computed state for the final result
                st.pop();// removing the opening and the closing paranthesis pairs
                if(x==0){
                    x+=1;
                }
                else{
                    x=x*2;
                }
                st.top()+=x;
            }
        }
        return st.top();
    }
};