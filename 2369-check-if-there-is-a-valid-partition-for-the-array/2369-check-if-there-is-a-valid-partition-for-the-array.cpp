class Solution {
public:
    bool helper(vector<int>& nums,int i,vector<int>& dp){
        int n=nums.size();
        if(i==nums.size())return true;
        if(dp[i]!=-1)return dp[i];
        bool ans=false;
        if(i<n && i+1<n && nums[i]==nums[i+1]){
             ans|=helper(nums,i+2,dp);
        }
        if(i<n && i+1<n && i+2<n && nums[i]==nums[i+1] && nums[i+1]==nums[i+2]){
             ans|=helper(nums,i+3,dp);
        }
        if(i<n && i+1<n && i+2<n && nums[i]+1==nums[i+1] && nums[i+1]+1==nums[i+2]){
             ans|=helper(nums,i+3,dp);
        }
        return dp[i]=ans;
    }
    
    
    
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return helper(nums,0,dp);
    }
};