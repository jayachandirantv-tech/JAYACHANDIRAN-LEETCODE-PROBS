class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int R=matrix.size();
        int C=matrix[0].size();
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(matrix[r][c]>target){
                    break;
                }
                if(matrix[r][c]==target){
                    return true;
                }
            }
        }
        return false;
    }
};