class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();

        int totalOnes = 0;
        for (char c : s) {
            if (c == '1')
                totalOnes++;
        }

        // Add virtual 1
        string t = "1" + s + "1";

        // Store blocks as {character, length}
        vector<pair<char, int>> blocks;

        int cnt = 1;
        for (int i = 1; i < t.size(); i++) {
            if (t[i] == t[i - 1]) {
                cnt++;
            } else {
                blocks.push_back({t[i - 1], cnt});
                cnt = 1;
            }
        }
        blocks.push_back({t.back(), cnt});

        int ans = totalOnes;

        // Check every 1-block surrounded by 0-blocks
        for (int i = 1; i < blocks.size() - 1; i++) {
            if (blocks[i].first == '1' &&
                blocks[i - 1].first == '0' &&
                blocks[i + 1].first == '0') {

                int candidate = totalOnes + blocks[i - 1].second + blocks[i + 1].second;
                ans = max(ans, candidate);
            }
        }

        return ans;
    }
};