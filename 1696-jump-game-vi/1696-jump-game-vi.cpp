class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        int s=nums.size();
        pq.push({nums[s-1],s-1});
        int mx=nums[s-1];
        for(int i=s-2;i>=0;i--)
        {
            while(pq.size() && (pq.top().second-i>k))pq.pop();
            mx=nums[i]+pq.top().first;
            pq.push({mx,i});
        }
        return mx;
        
    }
};