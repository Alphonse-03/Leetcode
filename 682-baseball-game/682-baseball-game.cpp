class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for(auto &i:ops)
        {
            
           
            if(i=="+")
            {
                int x=st.top();
                st.pop();
                int y=st.top();
                st.push(x);
                st.push(x+y);
            }
            else if(i=="C")
            {
                st.pop();
            }
            else if(i=="D")
            {
                st.push(st.top()*2);
            }
             else
            {
                int num=stoi(i);
                st.push(num);
            }
        }
        int ans=0;
        while(st.size())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};