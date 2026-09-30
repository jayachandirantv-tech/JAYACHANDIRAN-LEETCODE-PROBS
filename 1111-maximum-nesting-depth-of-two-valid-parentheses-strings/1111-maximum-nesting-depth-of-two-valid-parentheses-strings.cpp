class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int N=seq.size();
        int depth=0;
        vector<int>grp(N);
        for(int in=0;in<N;in++){
            if(seq[in]=='('){
                grp[in]=depth%2;
                depth++;
            }
            else{
                depth--;
                grp[in]=depth%2;
            }
        }
        return grp;
    }
};