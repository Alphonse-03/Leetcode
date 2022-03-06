class Solution {
public:
    int countOrders(int n) {
        vector<long long> dp(501,0);
        long long mod=1e9+7;
        dp[1]=1;
        dp[2]=6;
        for(int i=3;i<=n;i++)
        {
            long long x=(2*i)-1;
            long long sum=x*(x+1)/2;
            dp[i]=(long long)(sum*dp[i-1])%mod;
        }
        return dp[n];
    }
};