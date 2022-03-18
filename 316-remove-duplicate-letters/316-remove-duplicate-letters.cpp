class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<int> st;
        vector<int> last(26,0);
        vector<bool> vis(26,false);
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            last[s[i]-'a']=i;
        }
        
        for(int i=0;i<s.size();i++)
        {
           
                if(st.empty())
                {
                    st.push(s[i]);
                    vis[s[i]-'a']=true;
                }
                else
                {
                    while(st.size() && st.top()>s[i] && last[st.top()-'a']>i && vis[s[i]-'a']==false)
                    {
                        vis[st.top()-'a']=false;
                        st.pop();
                    }
                    if(vis[s[i]-'a']==false)
                    {
                        st.push(s[i]);
                        vis[s[i]-'a']=true;
                    }
                }
            
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};