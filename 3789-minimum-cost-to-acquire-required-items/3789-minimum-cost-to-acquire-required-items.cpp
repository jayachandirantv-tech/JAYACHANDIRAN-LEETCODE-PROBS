class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
      /* three types of buying is possible in this problem case so we need to find all the three cost and need to 
       the minimum of all costs

       case 1: buy the things sepeartely cost1*need1 + cost2*need

       case 2:buy the common of the both things and buy remaining using its respective cost

       case 3:buy all the things using the costboth 

       in this no other combinations will be smaller than b and c because they will be the intermediate state of 
       the b and c so according to the linear cost interpolation as it states that intermediate state will be always greater than that of the egde cases
       
       *************CODE*************
    */
     
     long long pos1=(long long) need1*cost1+(long long) need2*cost2;

     long long pos2=(long long) min(need1,need2)*costBoth+(long long) (need1-min(need1,need2))*cost1+
                    (long long) (need2-min(need1,need2))*cost2;

     long long pos3=(long long) max(need1,need2)*costBoth;

     return min(pos1,min(pos2,pos3));
    }
};