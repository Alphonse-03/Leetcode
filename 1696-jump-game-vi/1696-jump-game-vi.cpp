class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        deque<pair<int,int>> dq;
        dq.push_back({0,nums[0]});
        for(int i=1;i<nums.size();i++)
        {
            int curr=dq.front().second+nums[i];
            while(!dq.empty() && dq.back().second<=curr)dq.pop_back();
            dq.push_back({i,curr});
            while(i-dq.front().first>=k)dq.pop_front();
        }
        return dq.back().second;
    }
};