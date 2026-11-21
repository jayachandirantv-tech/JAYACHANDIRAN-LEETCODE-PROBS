class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        string a="Alice";
        string b="Bob";
        string n="None";
        vector<string>res;
        int acount=0;
        int bcount=0;
        for(int in=0;in<rain.size();in++){
            if(in<rain.size()-1 && rain[in]==1 && rain[in+1]==1){
                if(acount<=bcount){
                    res.push_back(a);
                    acount++;
                }
                else{
                    res.push_back(b);
                    bcount++;
                }
            }
            else if(rain[in]==1){
                res.push_back(b);
                bcount++;
            }
            else{
                res.push_back(n);
            }
        }
        return res;
    }
};