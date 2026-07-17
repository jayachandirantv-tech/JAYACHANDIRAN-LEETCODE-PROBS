class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int in=0;in<operations.size();in++)
        {
            if(operations[in]=="C")
            {
                if(st.empty())
                {
                    continue;
                }
                else
                {
                    st.pop();
                }
            }
            else if(operations[in]=="D")
            {
                st.push(st.top()*2);
            }
            else if(operations[in]=="+")
            {
                int first=st.top();
                st.pop();
                int sec=st.top();
                st.push(first);
                st.push(first+sec);
            }
            else
            {
                st.push(stoi(operations[in]));
            }

        }
        int sum=0;
   while(!st.empty())
   {
     sum+=st.top();
     st.pop();
   }
   return sum;
    }
};