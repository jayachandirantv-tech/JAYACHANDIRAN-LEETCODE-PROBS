class Solution {
public:
    bool rotateString(string s, string goal) {
        string ns=goal+goal;
       if(ns.contains(s))
       {
        return true;
       }
       return false;
    }
};