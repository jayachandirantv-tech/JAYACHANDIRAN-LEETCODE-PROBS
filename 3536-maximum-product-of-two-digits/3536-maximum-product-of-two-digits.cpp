class Solution {
public:
    int maxProduct(int n) {
        vector<int>prod;
        while(n>0)
        {
          prod.push_back(n%10);
          n=n/10;
        }
        sort(prod.begin(),prod.end());
        if(prod[prod.size()-1]!=0 && prod[prod.size()-2]!=0)
        {
            return prod[prod.size()-1]*prod[prod.size()-2];
        }
        else
        {
            if(prod[prod.size()-1]!=0)
            {
                return 0;
            }
            else
            {
                return prod[prod.size()-1];
            }
        }
    }
};