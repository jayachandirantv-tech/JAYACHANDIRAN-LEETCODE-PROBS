class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
      int fbx1=rec1[0];
      int fby1=rec1[1];
      int fux1=rec1[2];
      int fuy1=rec1[3];

      int sbx1=rec2[0];
      int sby1=rec2[1];
      int sux1=rec2[2];
      int suy1=rec2[3];

     if(max(fbx1,sbx1)<min(fux1,sux1)){
        if(max(fby1,sby1)<min(fuy1,suy1)){
            return true;
        }
     }
     return false;
    }
};