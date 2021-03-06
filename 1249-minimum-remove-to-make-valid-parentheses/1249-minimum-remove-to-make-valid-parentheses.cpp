class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
        int back=0;
        int clo=0;
        for(auto &i:s)
        {
            if(i==')')clo++;
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                ans.push_back(s[i]);
            }
            else
            {
                if(s[i]==')')
                {
                    if(back)
                    {
                        ans.push_back(s[i]);
                        back--;
                    }  
                    else
                    {
                        clo--;
                    }
                }
                else if(s[i]=='(' && clo)
                {
                    ans.push_back(s[i]);
                    back++;
                    clo--;
                }
                
            }
        }
        
        
        
        // stack<int> st;
        // vector<int> bracket;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]=='(' || s[i]==')')bracket.push_back(i);
        // }
        // set<int> valid;
        // for(int i=0;i<bracket.size();i++)
        // {
        //     if(s[bracket[i]]=='(')st.push(bracket[i]);
        //     else
        //     {
        //         if(st.empty())continue;
        //         else
        //         {
        //             int back=st.top();
        //             valid.insert(back);
        //             valid.insert(bracket[i]);
        //             st.pop();
        //         }
        //     }
        // }
        // for(int i=0;i<s.size();i++)
        // {
        //     if(isalpha(s[i]))ans.push_back(s[i]);
        //     else if(valid.find(i)!=valid.end())
        //     {
        //         ans.push_back(s[i]);
        //     }
        // }
        return ans;
    }
};