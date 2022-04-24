class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int ans=0;
        int st=0;
        int idx=0;
        for(auto &i:s)
        {
            if(mp[i]!=0)
            {
                ans=max(ans,idx-st);
                while(mp[i]!=0)
                {
                    mp[s[st]]--;
                    st++;
                }
            }
            mp[i]++;
            idx++;
        }
        int n=s.size();
        ans=max(ans,n-st);
        return ans;
    }
};