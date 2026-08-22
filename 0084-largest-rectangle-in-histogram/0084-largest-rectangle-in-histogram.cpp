class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int N=heights.size(),maxarea=0;
        stack<int>st;
        for(int in=0;in<N;in++){
            while(!st.empty() && heights[st.top()]>=heights[in]){
                int ind=st.top();
                st.pop();
                int curr=heights[ind]*(st.empty()?in:in-st.top()-1);
                maxarea=max(maxarea,curr);
            }
            st.push(in);
        }
        while(!st.empty()){
            int val=heights[st.top()];
            st.pop();
            int curr=val*(st.empty()?N:N-1-st.top());
            maxarea=max(maxarea,curr);
        }
        return maxarea;
    }
};