class Solution {
public:
    int dp[10001];
    int helper(vector<int>& nums,int p)
    {
        if(p>=nums.size()-1)return 0;
        if(nums[p]==0)return 1000;
        
        int ans=INT_MAX;
        if(dp[p]!=-1)return dp[p];
        for(int i=1;i<=nums[p];i++)
        {
            if(p+i<nums.size())ans=min(ans,helper(nums,p+i));
        }
        return dp[p]=1+ans;
    }
    
    
    
    int jump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return helper(nums,0);
    }
};