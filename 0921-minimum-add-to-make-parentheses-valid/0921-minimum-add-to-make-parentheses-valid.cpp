class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<int>st;
       int count=0;
       for(int in=0;in<s.size();in++){
        if(s[in]=='('){
            st.push(0);
        }
        else{
            if(!st.empty()){
                st.pop();
            }
            else{
                count++;
            }
        }
       }
       if(!st.empty()){
        return count+st.size();
       }
       return count;
    }
};