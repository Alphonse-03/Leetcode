class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> st;
        vector<int> ans;
        for(auto &i:nums)
        {
            if(st.find(i)==st.end())
            {
                st.insert(i);
                ans.push_back(i);
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            nums[i]=ans[i];
        }
        return ans.size();
    }
};