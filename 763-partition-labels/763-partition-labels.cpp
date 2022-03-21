class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,pair<int,int>> mp;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]={i,i};
            }
            else
            {
                mp[s[i]].second=i;
            }
        }
        vector<int> ans;
        int end=0;
        for(int i=0;i<s.size();i++)
        {
            int sa=i;
            end=mp[s[i]].second;
            for(;i<end;i++)
            {
                if(mp[s[i]].second>end)
                {
                    end=mp[s[i]].second;
                }
            }
            ans.push_back(end-sa+1);
        }
        return ans;
    }
};