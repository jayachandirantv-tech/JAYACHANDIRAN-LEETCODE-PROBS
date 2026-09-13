class Solution {
    int dr[4]={1,-1,0,0};
    int dc[4]={0,0,-1,1};
    vector<pair<int,int>>original;
    int ans=0;
    void shift(vector<vector<int>>img1,vector<vector<int>>img2){
        int N=img1.size();
        for(int r=-(N-1);r<=N-1;r++){
            for(int c=-(N-1);c<=N-1;c++){
                int count=0;
                for(int in=0;in<original.size();in++){
                    auto[nr,nc]=original[in];
                    nr=nr+r;
                    nc=nc+c;
                    if(nr<0 || nr>=N || nc<0 || nc>=N) continue;
                    if(img2[nr][nc]==1){
                        count++;
                    }
                }
                ans=max(ans,count);
            }
        }
    }
    void pos(vector<vector<int>>img1){
        int N=img1.size();
        for(int r=0;r<N;r++){
            for(int c=0;c<N;c++){
                if(img1[r][c]==1){
                      original.push_back(make_pair(r,c));
                }
            }
        }
    }
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int N=img1.size();
        pos(img1);
        shift(img1,img2);
        return ans;
    }
};