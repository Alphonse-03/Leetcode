class Solution {
public:
    int ladderLength(string start, string end, vector<string>& list) {
        unordered_set<string> st;
        queue<string> qu;
        qu.push(start);
        int ans=0;
        for(auto &i:list)
        {
            st.insert(i);
        }
        if(st.find(end)==st.end())return 0;
        while(!qu.empty())
        {
            ans++;
            int n=qu.size();
            while(n--)
            {
                string back=qu.front();
                qu.pop();
                for(int i=0;i<back.size();i++)
                {
                    string temp=back;
                    //if(back[i]==end[i])continue;
                    char ch=back[i];
                    for(int j=0;j<26;j++)
                    {
                        if(ch-'a'!=j)
                        {
                            back[i]='a'+j;
                            if(st.find(back)!=st.end())
                            {
                                if(back==end)return ans+1;
                                qu.push(back);   
                                st.erase(back);
                            }
                        }
                    }
                    back=temp;
                }
            }
        }
        return 0;
    }
};
