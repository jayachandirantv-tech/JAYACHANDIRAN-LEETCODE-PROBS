class Solution {
public:
    int maximumGap(string skill, string station) {
      int SN=skill.size();
      vector<int>earliest(SN),latest(SN);
      int in=0;
      int itr=0;
      while(in<skill.size()){
         while(station[itr]!=skill[in]){
            itr++;
         }
         earliest[in]=itr;
         in++;
         itr++;
      }
      in=skill.size()-1;
      itr=station.size()-1;
      while(in>=0){
        while(station[itr]!=skill[in]){
            itr--;
        }
        latest[in]=itr;
        in--;
        itr--;
      }
      int maxdt=0;
    for(int in=0;in<skill.size()-1;in++){
     maxdt=max(maxdt,latest[in+1]-earliest[in]);
    }  
    return maxdt;
    }
};