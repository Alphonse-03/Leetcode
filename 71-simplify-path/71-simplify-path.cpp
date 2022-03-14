class Solution {
public:
    string simplifyPath(string path) {
        if(path.back()=='/')path.pop_back();
        string ans="";
        vector<string> t;
        string x="";
        for(auto &i:path)
        {
            if(i!='/')
            {
                x.push_back(i);
            }
            else
            {
                if(x.size())
                {
                    if(x.size()==1 && x[0]=='.'){x="";continue;}
                    t.push_back(x);
                }
                x="";
            }
        }
        if(x.size()==1 && x[0]=='.'){}
        else t.push_back(x);
        stack<string> st;
        for(auto &i:t)
        {
            if(i.size()==2 && i[0]=='.' && i[1]=='.')
            {
                if(st.size())st.pop();
            }
            else st.push(i);
        }
        vector<string> las;
        while(st.size())
        {
            las.push_back(st.top());
            st.pop();
        }
        reverse(las.begin(),las.end());
        for(auto &i:las)
        {
            ans.push_back('/');
            for(auto &j:i)
            {
                ans.push_back(j);
            }
            
        }
        if(ans.size()==0)return "/";
        if(ans.back()=='/' && ans.size()>1)ans.pop_back();
        return ans;
    }
};