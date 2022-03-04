typedef long long ll;
class Solution {
public:
    double champagneTower(int pour, int x, int y) {
        vector<vector<double>> dp(102,vector<double>(102,0.0));
        dp[0][0]=pour;
        for(int i=0;i<=x;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(dp[i][j]>1)
                {
                    dp[i+1][j]+=(dp[i][j]-1)/2;
                    dp[i+1][j+1]+=(dp[i][j]-1)/2;
                    dp[i][j]=1;
                }
            }
        }
        return dp[x][y];
        
        
        
    }
};