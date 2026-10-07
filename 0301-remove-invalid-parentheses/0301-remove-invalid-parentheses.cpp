class Solution {
    int unmatchopen = 0;
    int unmatchclose = 0;

    string temp = "";
    unordered_set<string> res;

    // Find how many '(' and ')' must be removed
    void tofind(string &s) {
        int open = 0;

        for (char ch : s) {
            if (ch == '(') {
                open++;
            }
            else if (ch == ')') {
                if (open > 0) {
                    open--;
                }
                else {
                    unmatchclose++;
                }
            }
        }

        unmatchopen = open;
    }

    // Generate only possible minimum-removal strings
    void gen(string &s, int in, int balance) {
        if (in == s.size()) {

            // We must remove exactly the required parentheses
            // and the final balance must be zero
            if (unmatchopen == 0 &&
                unmatchclose == 0 &&
                balance == 0) {

                res.insert(temp);
            }

            return;
        }

        char ch = s[in];

        // Normal character
        if (ch != '(' && ch != ')') {
            temp.push_back(ch);
            gen(s, in + 1, balance);
            temp.pop_back();
            return;
        }

        // '('
        if (ch == '(') {

            // Keep '('
            temp.push_back('(');
            gen(s, in + 1, balance + 1);
            temp.pop_back();

            // Remove '('
            if (unmatchopen > 0) {
                unmatchopen--;
                gen(s, in + 1, balance);
                unmatchopen++;
            }
        }

        // ')'
        else {

            // Keep ')' only when it doesn't make balance negative
            if (balance > 0) {
                temp.push_back(')');
                gen(s, in + 1, balance - 1);
                temp.pop_back();
            }

            // Remove ')'
            if (unmatchclose > 0) {
                unmatchclose--;
                gen(s, in + 1, balance);
                unmatchclose++;
            }
        }
    }

public:
    vector<string> removeInvalidParentheses(string s) {

        // Reset values
        unmatchopen = 0;
        unmatchclose = 0;
        temp.clear();
        res.clear();

        // Find minimum number of removals
        tofind(s);

        // Generate valid strings
        gen(s, 0, 0);

        // Convert set to vector
        vector<string> ans;

        for (auto str : res) {
            ans.push_back(str);
        }

        return ans;
    }
};