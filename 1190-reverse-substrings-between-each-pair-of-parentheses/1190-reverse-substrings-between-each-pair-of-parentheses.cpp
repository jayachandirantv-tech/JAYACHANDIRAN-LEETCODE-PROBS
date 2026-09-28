class Solution {
public:
    string reverseParentheses(string s) {
        int N=s.size();
        stack<int>st;
        int temp;
        for(int in=0;in<N;in++){
            if(s[in]=='('){
                st.push(in); 
            }
            else if(s[in]==')' && !st.empty())
            {
               int ind = st.top();
               st.pop();

               int left = ind + 1;
                int right = in - 1;

               while(left < right){
                swap(s[left], s[right]);
                left++;
                right--;
            } 
        }
        }
        string res="";
        for(int in=0;in<s.size();in++){
            if(s[in]=='(' || s[in]==')') continue;
            res+=s[in];
        }
        return res;
        }
};