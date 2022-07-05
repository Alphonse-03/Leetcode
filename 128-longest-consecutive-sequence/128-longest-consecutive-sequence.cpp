class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
      
        int ans=0;
        int t=0;
        for(auto &i:nums)
        {
            if(st.find(i)!=st.end())
            {
                st.erase(i);
                t=1;
                int x=i;
                while(st.find(i-1)!=st.end()){t++;st.erase(i-1);i--;}
                i=x;
                while(st.find(i+1)!=st.end()){t++;st.erase(i+1);i++;}
            }
            ans=max(ans,t);
        }
        return ans;
    }
};