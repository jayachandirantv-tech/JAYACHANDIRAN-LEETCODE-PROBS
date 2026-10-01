class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int in=0;in<s.size();in++){
            if( s[in]=='(' || s[in]=='[' || s[in]=='{'){
                st.push(s[in]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if(s[in]=='}' && st.top()=='{'){
                  st.pop();
                }
                else if(s[in]==']' && st.top()=='['){
                    st.pop();
                }
                else if(s[in]==')' && st.top()=='('){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};