class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<vector<int>> st;
        map<int,int> mp;
        for(auto& i:nums)
        {
            if(mp.find(i+k)!=mp.end())
            {
                vector<int> t={i,k+i};
                sort(t.begin(),t.end());
                st.insert(t);   
            }
            if(mp.find(i-k)!=mp.end())
            {
                vector<int> t={i,i-k};
                sort(t.begin(),t.end());
                st.insert(t);
            }
            mp[i]=1;
        }
        return st.size();
        
    }
};