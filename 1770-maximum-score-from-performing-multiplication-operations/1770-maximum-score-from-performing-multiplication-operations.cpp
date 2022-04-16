class Solution {
public:
    
    int dp[1001][1001];
    int helper(vector<int>& nums,vector<int>& mul,int s,int i,int m)
    {
        if(i>=m)return 0;
        if(dp[i][s]!=-1)return dp[i][s];
        int e=nums.size()-1-i+s;
        int a=mul[i]*nums[s]+helper(nums,mul,s+1,i+1,m);
        int b=mul[i]*nums[e]+helper(nums,mul,s,i+1,m);
        return dp[i][s]=max(a,b);
    }
    
    

    
    
    
    
    
    
    
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        int n=nums.size();
        int m=mul.size();
        memset(dp,-1,sizeof(dp));
        return helper(nums,mul,0,0,m);
        
    }
};