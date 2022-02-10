class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long,int> mp;
        long long sum=0;
        int ans=0;
        for(auto &i:nums)
        {
            sum+=i;
            if(mp.find(sum-k)!=mp.end())
            {
                ans+=mp[sum-k];
            }
            if(sum==k)
            {
                ans++;
            }
            mp[sum]++;
        }
        return ans;
    }
};