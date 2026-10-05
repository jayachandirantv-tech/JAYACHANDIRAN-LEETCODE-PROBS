class Solution {
public:
    int scoreOfParentheses(string s) {

        vector<int> res;
        stack<pair<char,int>> st;
        int fin = 0;

        for(int in = 0; in < s.size(); in++) {

            if(s[in] == '(') {
                st.push(make_pair('(', res.size()));
                res.push_back(0);
            }

            else {
                int ind = st.top().second;
                st.pop();

                int temp = res[ind];

                if(temp == 0) {
                    temp = 1;
                }
                else {
                    temp = temp * 2;
                }

                res[ind] = temp;

                if(st.empty()) {
                    fin += temp;
                    res.clear();
                }
                else {
                    int parent = st.top().second;
                    res[parent] += temp;
                }
            }
        }

        return fin;
    }
};