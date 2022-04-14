class Solution {
public:
    int dp[1001][2001];
    int helper(vector<vector<int>>& piles,int k,int i)
    {
        if(i>=piles.size())return 0;
        if(dp[i][k]!=-1)return dp[i][k];
        int a=helper(piles,k,i+1);
        int s=piles[i].size();
        int mi=min(s,k);
        int sum=0;
        int b=0;
        for(int j=0;j<mi;j++)
        {
            sum+=piles[i][j];
            b=max(b,sum+helper(piles,k-j-1,i+1));
        }
        return dp[i][k]=max(a,b);
    }
    
    
    
    
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        memset(dp,-1,sizeof(dp));
        return helper(piles,k,0);
    }
};