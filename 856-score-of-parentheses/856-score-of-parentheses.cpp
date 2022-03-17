class Solution {
public:
   int scoreOfParentheses(string s) {
        int i;
        stack<int> st;
        for(i=0;i<s.length();i++)
        {
            if(s[i]==')')
            {
                int x=0;
                while(st.top()!=-1)
                {
                    x+=st.top()*2;
                    st.pop();
                }
                st.pop();
                if(x==0){x=1;}
               
                st.push(x);
            }
            else
            {
                st.push(-1);
            }
        }
        int ans=0;
        while(!st.empty()){ans+=st.top(); st.pop();}
        return ans;
    }
};