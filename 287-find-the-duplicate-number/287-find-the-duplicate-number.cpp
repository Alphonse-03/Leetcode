class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>mp(n);
        for(auto &i:nums)
        {
            mp[i]++;
            if(mp[i]>1)return i;
        }
        return -1;
    }
    
};