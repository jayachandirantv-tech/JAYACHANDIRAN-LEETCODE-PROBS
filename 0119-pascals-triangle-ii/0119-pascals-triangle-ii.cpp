class Solution {
public:
    vector<int> getRow(int rowindex) {
        vector<vector<int>>tri(34);
        if(rowindex==0){
            return {1};
        }
        for(int in=0;in<=33;in++){
            for(int c=0;c<=in;c++){
                if(c==0 ||c==in){
                      tri[in].push_back(1);
                }
                else if(in>0){
                     tri[in].push_back(tri[in-1][c]+tri[in-1][c-1]);
                }
                }
                  if(in==rowindex){
                    return tri[in];
            }
        }
        return {1};
    }
};