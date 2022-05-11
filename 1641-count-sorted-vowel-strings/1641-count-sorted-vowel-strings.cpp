class Solution {
public:
    int countVowelStrings(int n) {
         int dp[5];
        for(int i=0;i<5;i++)
        {
            dp[i]=1;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<5;j++)
            {
                dp[j]=dp[j-1]+dp[j];
            }
        }
        return dp[4];
    }
};