class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>res;
        for(int in=0;in<asteroids.size();in++){
           if(st.empty()){
            st.push(asteroids[in]);
            continue;
           }
           int flag=1;
           while(!st.empty() && asteroids[in]<0 && st.top()>0){
            int temp=abs(asteroids[in]);
            if(st.top()==temp){
                st.pop();
                flag=0;
                break;
            }
            if(temp>st.top()){
                st.pop();
                continue;
            }
            else{
                flag=0;
               break;
            }
           }
           if(flag==0){
            continue;
           }
           else{
            st.push(asteroids[in]);
           }
         }
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
    }
};