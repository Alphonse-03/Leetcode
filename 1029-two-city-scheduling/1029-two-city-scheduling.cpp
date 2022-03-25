class Solution {
public:
    int dp[101][51][51];
    int helper(vector<vector<int>>& costs,int i,int a,int b,int n)
    {
        if(i>=costs.size())return 0;
        if(dp[i][a][b]!=-1)return dp[i][a][b];
        if(a==n)
        {
            return dp[i][a][b]=costs[i][1]+helper(costs,i+1,a,b+1,n);
        }
        if(b==n)
        {
            return dp[i][a][b]=costs[i][0]+helper(costs,i+1,a+1,b,n);
        }
        int x=costs[i][1]+helper(costs,i+1,a,b+1,n);
        int y=costs[i][0]+helper(costs,i+1,a+1,b,n);
        return dp[i][a][b]=min(x,y);
            
    }
    
    
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        memset(dp,-1,sizeof(dp));
        return helper(costs,0,0,0,costs.size()/2);
    }
};