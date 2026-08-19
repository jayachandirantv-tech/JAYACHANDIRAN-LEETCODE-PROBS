class Solution {
public:
    int maxNumberOfFamilies(int N, vector<vector<int>>& reserved) {

       unordered_map<int,vector<int>>ntavi;         
        vector<int>row,col;// to store row and col
        for(int row=0;row<reserved.size();row++){
          int r=reserved[row][0];
          int c=reserved[row][1];
          if(ntavi.find(r)==ntavi.end()){
            ntavi[r]=vector<int>(4,0);
          }
          if(c==2 || c==3){
            ntavi[r][1]++;
          }
          else if(c==4||c==5){
            ntavi[r][1]++;
            ntavi[r][2]++;
          }
          else if(c==6||c==7){
            ntavi[r][3]++;
            ntavi[r][2]++;
          }
          else if(c==8||c==9){
            ntavi[r][3]++;
          }
        }
        long long avai = 2LL * (N - ntavi.size());
    for(auto &it:ntavi){
        int r=it.first;
                if(ntavi[r][1]==0 && ntavi[r][3]==0){
                    avai+=2;
                }
                else if(ntavi[r][2]==0){
                    avai++;
                }
                else if(ntavi[r][1]==0 || ntavi[r][3]==0){
                    avai++;
                }
                else{
                    continue;
                }
            }
    return avai;
    }
};