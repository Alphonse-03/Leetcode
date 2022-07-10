class Solution {
public:
    
    int dp[1001];
    int helper(vector<int>& cost,int i){
        if(i>=cost.size())return 0;
        if(dp[i]!=-1)return dp[i];
        return dp[i]=min(cost[i-1]+helper(cost,i+1),cost[i]+helper(cost,i+2));
        
    }
    
    
    
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        return helper(cost,1);
    }
};